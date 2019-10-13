#include <iostream>
#include <vector>
using namespace std;
 
int f(vector<int> &vec);
int count = 0;
 
int main(){
  int vector_size, new_value, qnt_query;
  
  cin >> qnt_query;
  int result[qnt_query+2];
  
  for(int i = 0; i < qnt_query; i++){
 
    cin >> vector_size;
    vector<int> values(vector_size);
    for(int i = 0; i < vector_size; i++){
      cin >> new_value;
      values.at(i) = new_value;
    }
    result[i] = f(values);
    count = 0;
  }
  
  for(int i = 0; i < qnt_query; i++)
  cout << result[i] << endl;
  return 0;
}
 
int f(vector<int> &vec){
  for(unsigned i = 0; i < vec.size(); i++){
    if(vec.at(i) % 3 == 0){
      count ++;
    }
    else if((vec.at(i) + vec.at(i)+1) % 3 == 0){
      int a = vec.at(i);
      int b = vec.at(i)+1;
      vec.erase(vec.begin());
      vec.erase(vec.begin());
      vec.push_back(a+b);
      count ++;
    }
    else if((vec.at(i) + vec.at(i)+1 + vec.at(i)+2) % 3 == 0){
      int a = vec.at(i);
      int b = vec.at(i)+1;
      int c = vec.at(i)+2;
      vec.erase(vec.begin());
      vec.erase(vec.begin());
      vec.erase(vec.begin());
      vec.push_back(a+b+c);
      count ++;
    }
  }
  return count;
}
