#include <iostream>
#include <sstream>
using namespace std;

bool verify(string);

int main(){

  int n;
  bool stop_loop = false;
  
  cin >> n;
  n++;
  
  while(!stop_loop){
    stringstream ss;
    ss << n;
    string year;
    ss >> year;

    if(verify(year)){
      for(int i = 0; i < year.size(); i++){
	cout << year[i];
      }
      stop_loop = true;
    }
    else{
      n++;
    }
  }
  cout << endl;
  return 0;
}

bool verify(string year){

  bool beautiful = false;
  
  for(int i = 0; i < year.size(); i++){
    for(int j = i+1; j < year.size(); j++){
      if(year[i] != year[j]){
	beautiful = true;
      }
      else{
	beautiful = false;
	break;
      }
    }
    if(beautiful == false) break;
  }
  return beautiful;
}
  
