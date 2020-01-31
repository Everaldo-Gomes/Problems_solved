#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main(){
	long double v;
	cin >> v;

	string a = to_string(floor(v));
	int len = a.size(), count = 0;

	for(int i = 0; i < len; i++){
		if(a[i] == '4' || a[i] == '7') count++;	
	}

	if(count == 4 || count == 7) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}
