#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  string name;
  vector <string> result;
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> name;
    int s_len = name.size();
    
    if(name[s_len-1] == 'o' && name[s_len-2] == 'p')
      result.push_back("FILIPINO");

    else if(name[s_len-1] == 'u' && name[s_len-2] == 's' && name[s_len-3] == 'e' && name[s_len-4] == 'd' ||
	    name[s_len-1] == 'u' && name[s_len-2] == 's' && name[s_len-3] == 'a' && name[s_len-4] == 'm')
      result.push_back("JAPANESE");

    else if(name[s_len-1] == 'a' && name[s_len-2] == 'd' && name[s_len-3] == 'i' && name[s_len-4] == 'n' && name[s_len-5] == 'm')
      result.push_back("KOREAN");
    
  }
  int s = result.size();
  
  for(int i = 0; i < n; i++)
    cout << result.at(i) << endl;
  return 0;
}
