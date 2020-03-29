#include <iostream>
#include <cctype>
using namespace std;

int main(){

  string s;
  cin >> s;

  int str_size = s.size();
  bool all_upper = false;
  bool only_first_upper = false;

  if(str_size == 1){
    if(islower(s[0])){
      s[0] = toupper(s[0]);
      cout << s;
    }
    else{
      s[0] = tolower(s[0]);
      cout << s;
    }
  }
  else{
    //all uppercase letters
    for(int i = 0; i < str_size; i++){
      if(isupper(s[i])) all_upper = true;
      else{
	all_upper = false;
	break;
      }
    }
  
    if(all_upper){
      for(int i = 0; i < str_size; i++){
	s[i] = tolower(s[i]);
	cout << s[i];
      }
    }
    else{
      //only the frist caracter is in lowercase
      for(int i = 1; i < str_size; i++){
	if(islower(s[0]) && isupper(s[i])) only_first_upper = true;
	else{
	  only_first_upper = false;
	  break;
	}
      }
    
      if(only_first_upper){
	s[0] =  toupper(s[0]);
	cout << s[0];
	for(int i = 1; i < str_size; i++){
	  s[i] = tolower(s[i]);
	  cout << s[i];
	}
      }
      //do any change print the same string
      else{
	cout << s;
      }
    }
  }
  cout << endl;
  return 0;
}
