#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

  long int n, m, w1, h1, w2, h2;

  scanf("%ld %ld %ld %ld", &w1, &h1, &w2, &h2);

  //get maximum width
  if(w1 > w2) { m = w1; }
  else { m = w2; }
  
  long int a = ((h1+h2) * 2) + 4; //maximum left and right heights. +4 because it needs one square in each corner
  long int b = (m * 2); //maximum top botton widths
    
  printf("%ld\n", a+b);

  //matrix bellow just to see what is going on
  /*

  n = h1 + h2;

  char field[n][m];

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {

      if(i < h1 && j < w1)
  	field[i][j] = '-';
      else if(i < h2+h1 && j < w2 && i >= h1)
  	field[i][j] = '-';
      else {
  	field[i][j] = 'x';
      }      
      printf("%c ", field[i][j]);
    }
    printf("\n");
  }
  */

  return 0;
}
