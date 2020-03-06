#include <iostream>

using namespace std;

int main(){

    int x, y, sum_x, sum_y, sum_t;
    sum_x = sum_y = sum_t = 0;

    cin >> x >> y;

    if(x < y){
        for(int i = x+1; i < y; i++){ //x + 1 for doesn't start at the first odd number
            if(i % 2 != 0) sum_x += i;
            else continue;
        }
    }

    if(x > y){
        swap(x,y);
        for(int i = x+1; i < y; i++){ //x + 1 for doesn't start at the first odd number
            if(i % 2 != 0) sum_y += i;
            else continue;
        }
    }

    sum_t = sum_x + sum_y;
    cout << sum_t << endl;

    return 0;
}
