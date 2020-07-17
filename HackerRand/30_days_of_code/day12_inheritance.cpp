class Student :  public Person {
private:
  vector<int> testScores;  
public:
  Student(string fn, string ln, int ID, vector<int> &sc) : Person(fn, ln, ID) {
    this->testScores = sc;
  }

  char calculate() {
    int sum = 0;
    char c;

    for(unsigned int i = 0; i < testScores.size(); i++) {
      sum += testScores[i];
    }
    sum /= testScores.size(); //average

    if(sum >= 90 && sum <= 100) { c = 'O'; }
    else if(sum >= 80 && sum < 90) { c = 'E'; }
    else if(sum >= 70 && sum < 80) { c = 'A'; }
    else if(sum >= 55 && sum < 70) { c = 'P'; }
    else if(sum >= 40 && sum < 55) { c = 'D'; }
    else { c = 'T'; }
            
    return c;
  }
};
