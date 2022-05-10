#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main ()
{
	float total_price = 0;
	float total_fruit = 0;
	
	short int days = 0;
	cin >> days;
	
	for (int day = 1; day <= days; day++)
	{
		// get price
		
		float price = 0;
		cin >> price;

		total_price += price;

		
		getchar();

		
		// get fruits
		
		string fruits;
		getline(cin, fruits);

		short int fruit_qnt = 1;
		
		for (int i = 0; i < fruits.size(); i++)
		{
			if (fruits[i] == ' ')
			{
				fruit_qnt++;
			}
		}
		
		cout << "day " << day << ": " << fruit_qnt << " kg" << endl;
		total_fruit += fruit_qnt;
	}

	cout << fixed << setprecision(2)
		 << total_fruit / days << " kg by day\n"
		 << "R$ " << total_price / days << " by day" << endl;
}
