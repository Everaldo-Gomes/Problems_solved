bool canMakeArithmeticProgression(vector<int>& arr) {
  bool is = true;
      
  sort(arr.begin(), arr.end());
        
  int p = arr[1] - arr[0];
      
  for(unsigned int i = 1; i < arr.size(); i++) {
    if(arr[i] - arr[i-1] != p) { is = false; break; }
  }
      
  return is;
}
