#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;

  vector<string> v1(s1.size()), v2(s2.size()), v3(s3.size());
  for(unsigned int i = 0; i < v1.size(); i++) { v1[i] = s1[i]; }
  for(unsigned int i = 0; i < v2.size(); i++) { v2[i] = s2[i]; }
  for(unsigned int i = 0; i < v3.size(); i++) { v3[i] = s3[i]; }
  
  bool guest_possible = false;
  bool host_possible  = false;

  int c = 1;
  for(unsigned int i = 0; i < v1.size(); i++) { 
    for(unsigned int j = 0; j < v3.size(); j++) { 	
      if(v1[i] == v3[j]) {  
	v3.erase(v3.begin()+j);
	if(c == v1.size()) { guest_possible = true; break;}
	c++;
	break; 
      } 
    }
  }

  c = 1;
  for(unsigned int i = 0; i < v2.size(); i++) { 
    for(unsigned int j = 0; j < v3.size(); j++) { 	
      if(v2[i] == v3[j]) { 
	v3.erase(v3.begin()+j);
	if(c == v2.size()) { host_possible = true; break;}
	c++;
	break; 
      } 
    }
  }

  if(host_possible && guest_possible && v3.size() == 0) cout << "YES" << endl;
  else cout << "NO" << endl;


  return 0;
}
