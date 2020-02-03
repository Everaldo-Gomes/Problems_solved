#include <iostream>
using namespace std;

int main(){
	
	int r, c, flag = 0;
	cin >> r >> c;

	for(int i = 1; i <= r; i++){
		for(int j = 0; j < c; j++){
			if(i % 2 != 0) cout << "#";
			else{
				if(flag == 0){
					if(j == c-1){
						cout << "#";
						flag = 1;
					}
					else{
						cout << "."; 
					}
				}
				else{
					if(j == 0) cout << "#";
					else cout << ".";
					if(j == c-1) flag = 0;
				}
			}
		}
		cout << "\n";
	}
	return 0;
}