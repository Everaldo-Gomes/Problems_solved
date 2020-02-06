#include <iostream>
using namespace std;

int main(){

  int n, bun, beef, cullet, ham$, chi$;
  cin >> n;
  int ans[n];

  for(int i = 0; i < n; i++) ans[i] = 0;
  
  for(int i = 0; i < n; i++){
    cin >> bun >> beef >> cullet >> ham$ >> chi$;

    if(bun <= 1) ans[i] = 0;
    else{
      if(chi$ >= ham$ && bun >= 2){
	while(cullet >= 1 && bun >= 2){
	  ans[i] += chi$;
	  cullet--; bun-=2;
	}
      }
      if(chi$ <= ham$ && bun >= 2){
	while(beef >= 1 && bun >= 2){
	  ans[i] += ham$;
	  beef--; bun-=2;
	}
      }
      if(beef >= cullet && bun >= 2){
	while(beef >= 1 && bun >= 2){
	  ans[i] += ham$;
	  beef--; bun-=2;
	}
      }
      if(cullet >= beef && bun >= 2){
	while(cullet >= 1 && bun >= 2){
	  ans[i] += chi$;
	  cullet--; bun-=2;
	}
      }
    }      
  }
    
  for(int i = 0; i < n; i++) cout << ans[i] << endl;
  
  return 0;
}
