#include <iostream>
using namespace std;

int main(){
	
	int times;
	string letters;
	cin >> times;
/*
	char f[101],l[101];
	int s[101];
	int p = 0;
*/
	for(int i = 0; i < times; i++){
		cin >> letters;
		
		if(letters.length() > 10){
																									//-1 because the last caracter is \0, then the last letter is \0-1
			cout << letters[0] << letters.length()-2 << letters[letters.length()-1] << endl;
			//f[p] = letters[0]; s[p] = letters.length()-2; l[p] = letters[letters.length()-1]; p++;
		}
		else{
			cout << letters << endl;
		}
	}
/*
	for(int i = 0, p = 0; i < times; i++, p++){
		cout << f[p] << s[p] << l[p] << endl;
	}
	*/

	return 0;
}