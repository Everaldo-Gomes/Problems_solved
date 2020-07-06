#include <bits/stdc++.h>
using namespace std;

int numJewelsInStones(string J, string S);

int main() {
  
  cout << numJewelsInStones("aA","aAAbbbb");

  cout << endl;
  return 0;
}

int numJewelsInStones(string J, string S) {
  int qnt = 0;

  for(unsigned int i = 0; i < S.size(); i++) {
    for(unsigned int j = 0; j < J.size(); j++) {
      if(S[i] == J[j]) qnt++;
    }
  }
  return qnt;
}
