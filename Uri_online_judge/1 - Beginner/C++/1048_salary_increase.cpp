#include <iostream>
#include <iomanip>
using namespace std;

int main(){

  double salary, new_salary, readjustment, percent;
  cin >> salary;

  if(salary >= 0 && salary <= 400.00) percent = 0.15;
  else if(salary >= 400.01 && salary <= 800.00) percent = 0.12;
  else if(salary >= 800.01 && salary <= 1200.00) percent = 0.10;
  else if(salary >= 1200.01 && salary <= 2000.00) percent = 0.07;
  else percent = 0.04;
  
  readjustment = percent * salary;
  new_salary = readjustment + salary;
  
  
  cout << "Novo salario: " << fixed << setprecision(2) << new_salary << "\n"
       << "Reajuste ganho: " << readjustment << "\n"
       << "Em percentual: " << setprecision(0) << percent*100 << " %" << endl;
  
  return 0;
}
