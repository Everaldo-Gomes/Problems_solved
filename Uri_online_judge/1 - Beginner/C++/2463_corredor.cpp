#include <bits/stdc++.h>
using namespace std;

const int init = -1;

int kadane(int i, vector<int> &v, vector<int> &sum) {

  if(i == sum.size()) { return 0; }
  if(sum[i] != init)  { return sum[i]; }

  int a = v[i];
  int b = v[i] + kadane(i+1, v, sum);

  sum[i] = max(a, b);
  
  return sum[i];
}

int main() {

  int n, ans = 0;
  cin >> n;

  vector<int> v(n), sum(n, init);
  
  for(int i = 0; i < n; i++) { cin >> v[i]; }
  
  for(int i = 0; i < n; i++) { ans = max(ans, kadane(i, v, sum)); }
  
  cout << ans << endl;
  
  return 0;
}
