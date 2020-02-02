#include <iostream>
using namespace std;

int main(){
	long long int new_v, a[5], ans = 0;
	
	for(int i = 0; i < 4; i++) a[i] = 0;

	for(int i = 0; i < 4; i++){
		cin >> new_v; 
		a[i] = new_v;	
	}

	for(int i = 0; i < 4; i++){
		for(int j = i+1; j < 4; j++){
			if(a[i] == a[j]){
				ans++;
			}
		}
	}

	if(ans >= 4) cout << 3 << endl;
	else if(ans == 3) cout << 2 << endl; 
	else cout << ans << endl;
	return 0;
}