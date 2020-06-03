#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  float student, request, average, counter = 0;

  while(true){
    cin >> student;

    if(student < 0 || student > 10) cout << "nota invalida" << endl;
    else{
      average += student;
      counter++;
    }

    if(counter == 2){
      cout << fixed << setprecision(2) << "media = " << average / 2 << endl;
      cout << "novo calculo (1-sim 2-nao)" << endl;

      //while do not put 1 or 2 the message "novo calculo (1-sim 2-nao)" keeps keeps appearing
      while(true){
	cin >> request;

	if(request == 1 || request == 2){
	  average = 0;
	  break;
	}
	else
	  cout << "novo calculo (1-sim 2-nao)" << endl;
      }

      //counter = 0 because without it, it is going to sum with others averages
      if(request == 1){
	counter = 0;
	continue;
      }
      else if(request == 2) break;
    }
  }

  return 0;
}

