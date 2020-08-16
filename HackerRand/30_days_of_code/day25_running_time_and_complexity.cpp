bool is_prime(int n) {
  int i;
  bool prime = true;
  for(i = 2; i <= sqrt(n); i++) {
    if(n % i == 0) {  return false; }
  }
  return prime;
}

int main() {
  int t;
  cin >> t;

  while(t --> 0) {
    int n;
    cin >> n;
        
    if(n >= 2 && is_prime(n)) { cout << "Prime" << endl; }
    else { cout << "Not prime" << endl; }
  }
  return 0;
}
