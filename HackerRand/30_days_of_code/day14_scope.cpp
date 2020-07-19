class Difference {
private:
  vector<int> elements;
  
public:
  int maximumDifference;
  Difference(vector<int> &v) {
    elements = v;
  }
  int computeDifference() {
    for(unsigned int i = 0; i < elements.size()-1; i++) {
      for(unsigned int j = i+1; j < elements.size(); j++) {
	if(abs(elements[i]-elements[j]) > maximumDifference) {
	  maximumDifference = abs(elements[i] - elements[j]);
	}
      }
    }
    return maximumDifference;
  }  
};
