#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main ()
{
	ll bank_qnt, debenture_qnt;

	while(cin >> bank_qnt >> debenture_qnt)
	{
		if (bank_qnt == 0 && debenture_qnt == 0)
			break;

		vector<ll> bank_reserves(bank_qnt+1);
	
		for (size_t i = 1; i <= bank_qnt; i++)
			cin >> bank_reserves[i];

		ll debtor_bank, creditor_bank, debenture_value;
		
		for (size_t i = 0; i < debenture_qnt; i++)
		{
			cin	>> debtor_bank >> creditor_bank >> debenture_value;
			
			bank_reserves[debtor_bank]   -= debenture_value;
			bank_reserves[creditor_bank] += debenture_value;
		}

		bool r = true;
		
		for (size_t i = 1; i <= bank_qnt; i++)
		{
			if (bank_reserves[i] < 0)
			{
				r = false;
				break;
			}
		}

	    char s = r ? 'S' : 'N';
		cout << s << '\n';
	}
	    
	return 0;
}
