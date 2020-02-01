#include <iostream>
using namespace std;

int main(){
	
	int qnt, a, b, ans = 0;
	cin >> qnt;

	for(int i = 0; i < qnt; i++){
		cin >> a >> b;
		if(a < b) swap(a,b);
		if((a - b) >= 2) ans++;
	}
	cout << ans << endl;
	return 0;
}