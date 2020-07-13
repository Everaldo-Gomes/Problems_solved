//for some cases it is a bit slow

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    vector<vector<pair<string, string>>> list(n);
    string name, number;

    for(int i = 0; i < n; i++) {
        cin >> name >> number;
        list[i].push_back({name, number});
    }

    //search 
    int q = n;
    while(q--) {    //cannot be n because will it'll conflict
        cin >> name;
        string get_name = "";
        string get_num = "";
        bool stop = false;

        for(int i = 0; i < n; i++) {
            for(auto [n, num] : list[i]) {
                if(name == n) { 
                    get_name = n;  
                    get_num  = num;
                    stop = true;
                    break;
                }
            }
            if(stop) { break; }
        }
        if(get_name != "") { cout << get_name << "=" << get_num << endl; }
        else { cout << "Not found" << endl; }
    }
    
    return 0;
}
