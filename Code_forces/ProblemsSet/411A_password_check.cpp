#include <bits/stdc++.h>
using namespace std;

int main() {

    string pw;
    getline(cin,pw);
    getchar();

    bool len = false, upper = false, lower = false, number = false;

    //check size
    if(pw.size() >= 5) { len = true; }

    //check others
    for(unsigned int i = 0; i < pw.size(); i++) {
      if(isupper(pw[i])) { upper = true; }
      if(islower(pw[i])) { lower = true; }
      if((int)pw[i] >= 48 && (int)pw[i] <= 57) { number = true; }

      if(len && upper && lower && number) { break; }
    }

    if(len && upper && lower && number) { cout << "Correct" << endl; }
    else { cout << "Too weak" << endl; }
    
  return 0;
}
