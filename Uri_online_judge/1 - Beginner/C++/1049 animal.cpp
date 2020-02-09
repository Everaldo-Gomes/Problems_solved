#include <iostream>

using namespace std;

int main(){

	string f, s, t;
	cin >> f >> s >> t;

	if(f == "vertebrado"){
		if(s == "ave")
			if(t == "carnivoro")
				cout << "aguia" << endl;
			else
				cout << "pomba" << endl;
		else{
			if(t == "onivoro") 
				cout << "homem" << endl;
			else
				cout << "vaca" << endl;
		}
	}
	else{
		if(s == "inseto")
			if(t == "hematofago")
				cout << "pulga" << endl;
			else
				cout << "lagarta" << endl;
		else{
			if(t == "hematofago")
				cout << "sanguessuga" << endl;
			else
				cout << "minhoca" << endl;
		}
	}

	return 0;
}