#include <iostream>
using namespace std;

int main(){

  long int i, j, counter = 0, result = 0, n, aux_i, aux_j;


  while(cin >> i >> j){
    aux_j = j;
    aux_i = i;

    if(i > j) swap(i,j);
    result = 0;

    for(long int k = i; k <= j; k++){
      n = k;
      counter = 1;

      while(n > 1){

	if(n % 2 == 0){


	  n /= 2;
	  counter++;

	}
	else{


	  n = (3*n + 1);
	  counter++;

	}

      }
      if(counter > result) result = counter;

    }


    cout << aux_i << " " << aux_j << " " << result << endl;
  }

  return 0;
}
