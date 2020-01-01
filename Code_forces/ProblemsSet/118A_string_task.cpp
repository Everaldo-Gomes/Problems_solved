#include <iostream>
#include <cstring>
using namespace std;

int main(){

  char word[101], ans[1000];
  cin >> word;
  int s = strlen(word);
  int j = 0;
  for(int i = 0; i < s; i++){

    if(word[i] == 'A' || word[i] == 'O' || word[i] == 'Y' || word[i] == 'E' || word[i] == 'U' || word[i] == 'I' ||
       word[i] == 'a' || word[i] == 'o' || word[i] == 'y' || word[i] == 'e' || word[i] == 'u' || word[i] == 'i') {continue;}
    
    else{
      if(isupper(word[i]) || islower(word[i])){
	ans[j] = '.';
	j++;
	ans[j] = tolower(word[i]); j++;
      }
    }
  }
  
  for(int i = 0; i < j; i++) cout << ans[i];
  cout << endl;
  
  return 0;
}

