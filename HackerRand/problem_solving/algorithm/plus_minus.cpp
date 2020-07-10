vector<string> split_string(string);
double positive = 0;
double negative = 0;
double zero = 0;

// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
    
  double p = positive/arr.size();
  double n = negative/arr.size();
  double z = zero/arr.size();
  cout << fixed << setprecision(6) << p << "\n" << n << "\n" << z << endl;
}

int main()
{
  int n;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  string arr_temp_temp;
  getline(cin, arr_temp_temp);

  vector<string> arr_temp = split_string(arr_temp_temp);

  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    int arr_item = stoi(arr_temp[i]);

    arr[i] = arr_item;
    if(arr[i] > 0) { positive++; }
    else if(arr[i] == 0) { zero++; }
    else { negative++; }
  }

  plusMinus(arr);

  return 0;
}
