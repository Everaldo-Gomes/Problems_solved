#include <bits/stdc++.h>
using namespace std;

int main () {

	int n;
	cin >> n;

	while (n--) {

		string s1, s2, ans = "";
		cin >> s1 >> s2;
		
		int smallest = s1.size() < s2.size() ? 1 : 2;
	    int largest = s1.size() > s2.size() ? 1 : 2;
		int length_smallest = smallest == 1 ? s1.size() : s2.size();
	   	int length_largest = largest == 1 ? s1.size() : s2.size();
		
		for (int i = 0; i < length_smallest; i++) {
			ans += s1[i];
			ans += s2[i];	
		}

		for (int i = length_smallest; i < length_largest; i++) {			
			ans += largest == 1 ? s1[i] : s2[i];
		}
		
		cout << ans << endl;
	}
	
	return 0;
}
