#include <bits/stdc++.h>
using namespace std;

int main()
{

	int qnt_friend, qnt_bottles,
		mililiters_per_bottle, mililiters_needed,
		limes, lime_slices,
		salt_gram, salt_needed;

	cin >> qnt_friend >> qnt_bottles
		>> mililiters_per_bottle >> limes
		>> lime_slices >> salt_gram
		>> mililiters_needed >> salt_needed;

	int total_mililiter = qnt_bottles * mililiters_per_bottle;
	int total_toast_per_friend = total_mililiter / mililiters_needed;
	int total_lime = limes * lime_slices;
	int total_salt = salt_gram / salt_needed;
	int min_aux = min(total_toast_per_friend, total_lime);
	
	cout << min(min_aux, total_salt) / qnt_friend << "\n";
	
	return 0;
}
