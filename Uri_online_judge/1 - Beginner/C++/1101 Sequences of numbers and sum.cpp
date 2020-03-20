#include <iostream>

using namespace std;

int main(){
//==============SECOND TRY, IT WORKS, AND THE URI ACCEPTS
 int a[3], b[3], sum = 0, t[3], j = 0;

    //while the values are positives set values
    while(true){
        cin >> a[j] >> b[j];

        if(a[j] <= 0 || b[j] <= 0)break;

        //put the smallest value in the beginning
        if(a[j] > b[j]) swap(a[j],b[j]);

        //sum the pairs of values in each line
        for(int i = a[j]; i <= b[j]; i++){
            cout << i << " ";
            sum += i;
        }
        t[j] = (j-j) + sum; // t[j] = j + sum, makes the value increase 1, so, (j-j) cancels this number 1

        //show the the numbers, from the smallest to biggest
        cout << "Sum=" << t[j] << endl;

        j++;
        sum = 0;
    }


//=============FRIST TRY, IT WORKS, BUT THE URI DOES NOT ACCEPT

//    int a[3], b[3], sum = 0, t[3], j = 0;
//
//    //while the values are positives set values
//    while(true){
//        cin >> a[j] >> b[j];
//
//        if(a[j] <= 0 || b[j] <= 0)break;
//
//        //put the smallest value in the beginning
//        if(a[j] > b[j]) swap(a[j],b[j]);
//
//        //sum the pairs of values in each line
//        for(int i = a[j]; i <= b[j]; i++){
//            sum += i;
//        }
//        t[j] = (j-j) + sum; // t[j] = j + sum, makes the value increase 1, so, (j-j) cancels this number 1
//        j++;
//        sum = 0;
//    }
//
//    //show the the numbers, from the smallest to biggest
//    for(int i = a[0]; i <= b[0]; i++)
//        cout << i << " ";
//
//    cout << "Sum=" << t[0] << endl;;
//
//     for(int i = a[1]; i <= b[1]; i++)
//        cout << i << " ";
//    cout << "Sum=" << t[1] << endl;

    return 0;
}
