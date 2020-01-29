#include <iostream>
using namespace std;

int main(){

  string s_vec, x;
  int counter_a = 0;
  cin >> x;
  s_vec = x;
  
  int s_len = s_vec.size();
  
  //counting how many letters 'a' there 
  for(int i = 0; i < s_len; i++){  //lack consider empty strings
    if(s_vec[i] == 'a') counter_a += 1;
  }

  //is the string is good?
  if(counter_a > s_len / 2) cout << s_len << endl;
  else{
    int erase = 0, flag = 0;
    //"erasing" letters != a
    for(int i = 0; i < s_len; i++){      
      if(s_vec[i] != 'a'){
	s_vec[i] = ' ';
	
	//counting remaining letters
	for(int j = i; j < s_len; j++){  
	  if(s_vec[j] == ' '){
	    erase += 1;
	    int c = 0;
	    if(counter_a > (s_len - erase) / 2){
	      for(int i = 0;  i < (s_len); i++){
		if(s_vec[i] != ' ') c++;
	      }
	      cout << c << endl;
	      flag = 1;
	      break;
	    }
	  }
	}
	if(flag == 1) break;
      }
    }
  }	
  return 0;
}
