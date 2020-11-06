#include <iostream>
#include <vector>
#include <set>
using namespace std;

using link = pair<int64_t,int64_t>;
vector<vector<link>> edge;

int64_t N = 0, M = 0;
int64_t prim();

int main() {

  while(cin >> N >> M) {
    if(N == 0 && M == 0) break; //without it, will show one 0 in the end 
    int64_t total = 0;       
    edge.resize(N+2); //N or N+1 = segmentation fault

    for(int64_t i = 0; i < M; i++) {
      int64_t u, v, w;
      cin >> u >> v >> w;
      edge[u].push_back({v, w});
      edge[v].push_back({u, w});
      total += w;
    }
    cout << total - prim() << endl;
    edge.clear();
  }
}

int64_t prim() {
 
  vector<bool> visited(N+1, false); //N >= 1
  set<link> q;

  int64_t sum = 0;

  q.insert({0, 1});

  while(!q.empty()) {
    auto [w, u] = *q.begin();
    q.erase(q.begin());

    if(!visited[u]) {
      visited[u] = true;
      sum += w;
      
      for (auto [v, wv] : edge[u]) {
	q.insert({wv, v});
      }
    }
  }
  return sum;
}
