#include <stdio.h>

int main () {
  
  int n, m;
 
  scanf("%d", &n);
  scanf("%d", &m);

  int sequence[n];
  int fingerprint[m];
  
  for (int i = 0; i < n; i++) {
    
    int get_value = 0;
    
    scanf("%d", &get_value);    
    sequence[i] = get_value;
  }

  for (int i = 0; i < m; i++) {

    int get_value = 0;

    scanf("%d", &get_value);
    fingerprint[i] = get_value;
  }

  int pw[10];
  int digits = 0;
  int k = 0;
  
  for (int i = 0; i < n; i++) { 
    for (int j = 0; j < m; j++) {
      if (sequence[i] == fingerprint[j]) {
        pw[k] = sequence[i];
        k++;
        break;
      }
    }
  }

  for (int i = 0; i < k; i++) {
    
    printf("%d", pw[i]);

    if (i < k - 1) { printf(" "); }
  }
   
  return 0;
}
