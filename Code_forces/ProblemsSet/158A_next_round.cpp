#include <iostream>
using namespace std;

int main(){
	int k, n, next = 0, a[101], values;
	cin >> n >> k;
	
	//on Codeforce the all values must be initializes
	for(int i = 0; i < 101; i++) a[i] = 0;

	//puting the values
	for(int i = 0; i < n; i++){
		cin >> values;
		a[i] = values;
	}

	//calculating
	for(int i = 0; i < n;  i++){
		//k-1 becaue the array starts at 0
		if(a[i] >= a[k-1] && (a[k-1] > 0 || a[i] > 0)) next++;	
		else if(a[i] < a[k-1])	break;
	}
	
	//result
	cout << next << endl;
	return 0;
}
