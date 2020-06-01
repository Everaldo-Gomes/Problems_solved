#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  
    float n1, n2, average;
    int count = 0;

    //when count = 2, the loop ends and sum of the last two valid numbers is done
    while(count < 2){
        cin >> n1;

	/*
	  while do not put a valid number this statement keeps running, if it has a valid number, and after an invalid number, the valid number isn't lost
	  and count increment, that means, "we already have one valid number", when count is equal to 2, that means "we already have two number" and then the 
	  loop ends and make the sum of the first value with the last valid number
	*/
        if(n1 < 0 || n1 > 10) cout << "nota invalida" << endl;
        else{
            average += n1;
            count++;
        }
    }

    cout << fixed << setprecision(2) << "media = " << average / 2 << endl;

    return 0;
}
