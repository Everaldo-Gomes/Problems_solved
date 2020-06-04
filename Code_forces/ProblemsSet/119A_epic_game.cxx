#include <iostream>
using namespace std;

int main() {

  int a, b, heap, cdah, cdbh;

  cin >> a >> b >> heap;

  while(1) {

    //greatest common diviors da and heap
    for(int i = 1; i <= heap; i++) {
      if(a % i == 0 && heap % i == 0) cdah = i;
    }   

    if(heap < cdah && heap >= 0) { cout << 1 << endl; break; }
    else heap -= cdah;
    
    //greates common diviors db and heap
    for(int i = 1; i <= heap; i++) {
      if(b % i == 0 && heap % i == 0) cdbh = i;
    }   

    if(heap < cdbh && heap >= 0) { cout << 0 << endl; break; }
    else heap -= cdbh;

  }
 
  return 0;
}
