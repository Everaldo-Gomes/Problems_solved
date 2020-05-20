#include <iostream>
using namespace std;

int main(){

  string players;
  int z = 0, o = 0;
   
  cin >> players;
  for(int i = 0; i < players.size(); i++){

    if(players[i] == '0'){
      z++;
      if(players[i+1] != '0' && z < 7) z = 0;
    }
    else{
      o++;
      if(players[i+1] != '1' && o < 7) o = 0;
    }
    //cout << z << " " << o << "\n";
    if(players[i+1] == '\0') break;
  }


  if(o >= 7 || z >= 7) cout << "YES" << endl;
  else cout << "NO" << endl;


  return 0;
}
