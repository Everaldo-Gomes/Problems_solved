#include <iostream>
using namespace std;

int main(){

    int a, a1, b, b1, c, c1, t;

    cin >> a >> b >> c;

    a1 = a;
    b1 = b;
    c1 = c;

    if(a > b){
        t = a;
        a = b;
        b = t;
    }
    if(a > c){
        t = a;
        a = c;
        c = t;
    }
    if(b > c){
        t = b;
        b = c;
        c = t;
    }

    //it can replace the statement above
//    if(a > b)swap(a,b);
//    if(a > c)swap(a,c);
//    if(b > c)swap(b,c);

    cout << a << "\n" << b << "\n" << c << "\n\n";
    cout << a1 << "\n" << b1 << "\n" << c1 << endl;

    return 0;
}
