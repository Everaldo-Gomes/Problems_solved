#include <bits/stdc++.h>

using namespace std;

// Complete the solve function below.
void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip = meal_cost * (tip_percent/100.00);
    double tax = meal_cost * (tax_percent/100.00);    
    //double total_cost = round(meal_cost + tip + tax);
    int total_cost = round(meal_cost + tip + tax);
    cout << total_cost << endl;
}
