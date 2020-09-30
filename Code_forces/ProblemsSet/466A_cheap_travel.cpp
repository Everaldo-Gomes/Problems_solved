#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int full_path, more_one_step, price_one_step, price_more_one_step;
  cin >> full_path >> more_one_step >> price_one_step >> price_more_one_step;

  int sum_one_step = 0, walked_one_step = 0;
  while(walked_one_step < full_path) {
    sum_one_step += price_one_step;
    walked_one_step++;
  }

  int sum_more_step = 0, walked_more_step = 0;
    
  if(more_one_step >= full_path) {
    walked_more_step = more_one_step;
    sum_more_step = price_more_one_step;
  }
  else {
    while(walked_more_step < full_path) {
      if(walked_more_step + more_one_step <= full_path || price_more_one_step <= price_one_step) {
	sum_more_step += price_more_one_step;
	walked_more_step += more_one_step;
      }
      else {
	sum_more_step += price_one_step;
	walked_more_step++;
      }
    }
  }
    
  if(sum_more_step <= sum_one_step) { cout << sum_more_step << endl; }
  else { cout << sum_one_step << endl; }
  
  return 0;
}
