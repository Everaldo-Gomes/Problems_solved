#include <stdio.h>

int main () {
  
  long long int yellow_cristal, blue_cristal, yellow_ball, green_ball, blue_ball;
  yellow_cristal = blue_cristal = yellow_ball = green_ball = blue_ball = 0;
  
  scanf("%lld %lld %lld %lld %lld", &yellow_cristal, &blue_cristal, &yellow_ball, &green_ball, &blue_ball);

  long long int yellow_needed = green_ball + (yellow_ball * 2);
  long long int blue_needed = green_ball + (blue_ball * 3);
  long long int aux_y = yellow_cristal - yellow_needed;
  long long int aux_b = blue_cristal - blue_needed;
  long long int ans = 0;

  if (aux_y < 0 && aux_b >= 0) {
    aux_y *= -1;
    ans = aux_y;
  }
  else if (aux_b < 0 && aux_y >= 0) {
    aux_b *= -1;
    ans = aux_b;
  }
  else if (aux_b < 0 && aux_y < 0) {
    aux_b *= -1;
    aux_y *= -1;
    ans = aux_b + aux_y;
  }

  printf("%lld\n", ans);
  
  return 0;
}
