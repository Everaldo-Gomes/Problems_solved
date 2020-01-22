#include <iostream>
using namespace std;

int main(){

  long int employees, team_leader = 0, ways = 0;
  cin >> employees;
  int initial_employees = employees;
  int i = 1;
  while(i < employees){
    employees =  initial_employees;
    team_leader += i;
    employees -= team_leader;

    if(employees % team_leader == 0)
      if(team_leader <= initial_employees) ways++; 
    else i++; 
  }

  cout << ways << endl;
  return 0;
}
