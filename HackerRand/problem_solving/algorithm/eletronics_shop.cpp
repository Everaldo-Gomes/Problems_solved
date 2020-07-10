int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
  int to_pay = -1;

  for(unsigned int i = 0; i < keyboards.size(); i++) {
    for(unsigned int j = 0; j < drives.size(); j++) {
      if(keyboards[i] + drives[j] <= b && keyboards[i] + drives[j] > to_pay) {
	to_pay = keyboards[i] + drives[j];
      }
    }
  }
  return to_pay;
}
