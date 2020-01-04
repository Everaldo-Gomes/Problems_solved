#include <iostream>
using namespace std;

int main(){

  int n, ans = 0;
  string f;
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> f;

    if(f.compare("Tetrahedron") == 0) ans += 4;
    else if(f.compare("Cube") == 0) ans += 6;	    
    else if(f.compare("Octahedron") == 0) ans += 8;
    else if(f.compare("Dodecahedron") == 0) ans += 12;
    else ans += 20; //"Icosahedron"
  }
  
  cout << ans << endl;
  return 0;
}
