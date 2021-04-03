#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  int n = 0, a = 1, b = 2;
  int b_turn = 1;
  
  scanf("%d", &n);

  while(1) {

    if(a + b == n) {

      if(a % 2 == 0 && b % 2 == 0) {
	a--; b++;
      }
      
      break;
    }
    else if(b_turn) {
      b++;
      b_turn = 0;
    }
    else {
      a++;
      b_turn = 1;
    }
    
  }

  
  printf("%d %d\n", a, b);
   
  return 0;
}
