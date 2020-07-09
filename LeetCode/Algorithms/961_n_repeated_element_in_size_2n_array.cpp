int repeatedNTimes(vector<int>& A) {
  int number;
  sort(A.begin(), A.end());
      
  for(unsigned int i = 1; i < A.size(); i++) {
    if(A[i-1] == A[i]) { 
      number = A[i]; 
      break;
    }    
  }
  return number;
}
