#include <bits/stdc++.h>
using namespace std;

int main () {

  string S;
  cin >> S;
  
  try {
    int ans = stoi(S);   //string to int
    cout << ans << endl;
  }
  catch (...) { cout << "Bad String" << endl; }

  return 0;
}
