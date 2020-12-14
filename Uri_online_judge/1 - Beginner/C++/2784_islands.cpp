#include <iostream>
#include <vector>
#include <set>
using namespace std;

int qnt_island, qnt_cable, source, destination, ping, new_server, inf = 1e8;
vector<vector<pair<int,int>>> island;

int sssp(int, int);

int main() {
  
  cin >> qnt_island >> qnt_cable;
  island.resize(qnt_island+1);

  for(int i = 0; i < qnt_cable; i++) {
    cin >> source >> destination >> ping;
    island[source].push_back({destination, ping});
    island[destination].push_back({source, ping});
  }
  cin >> new_server;

  cout << sssp(new_server,1) << endl;
  
  return 0;
}

int sssp(int s, int d) {

  vector<int> i(island.size(), inf); 
  i[s] = 0;
  
  set<pair<int,int>> Q; 
  Q.insert({0,s}); 

  while(!Q.empty()) {
    auto [uw,u] = *Q.begin();
    Q.erase(Q.begin());

    for(auto [v,w] : island[u]) {
      if(w + i[u] < i[v]) {
	i[v] = w + i[u];
	Q.insert({i[v],v});
      }
    }
  }
  
  int lowest = inf, highest = 0;
  for(int ii : i) {
    if(highest < ii && ii != inf) highest = ii;
    if(lowest > ii && ii > 0) lowest = ii;
  }
  return highest - lowest;
}
