#include <iostream>
using namespace std;
 
int main(){
 
  long int n;
  cin >> n;
 
  long int i, j = 2, counter = 0, r = 0, ans[n];
 
  while(r < n){
    //checking for prime numbern must be > 1, then, 2 is the smallest prime number
    for(i = 2; i < j; i++)
      if(j % i == 0) j++;
     
    //sum the prime numbers and count how many is needed
    while(r < n){
      if(r+j > n){
    r -= j;
    j++;
    ans[counter-1] = j;
    counter -= 1;
      }
      else{
    r += j;
    ans[counter] = j;
    counter++;
      }
    }   
  }
   
  //result
  cout << counter << "\n";
  for(int i = 0; i < counter; i++) cout << ans[i] << " ";
  cout << endl;
  return 0;
}
