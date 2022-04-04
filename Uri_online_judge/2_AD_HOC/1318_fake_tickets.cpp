#include <bits/stdc++.h>
using namespace std;

int main () {

	int original_tickets, person_at_party, ticket_num;

	while (1) {
		
		cin >> original_tickets >> person_at_party;

		if (original_tickets == 0 && person_at_party == 0) {
			break;
		}
		
		vector<int> tickets (person_at_party);
		
		for (int i = 0; i < person_at_party; i++) {	
			cin >> tickets[i];
		}

		sort(tickets.begin(), tickets.end());
		int repeated_tickets = 0, last = 0;
		
		for (int i = 1; i < person_at_party; i++) {
			if (tickets[i-1] == tickets[i] && tickets[i] != last) {
				repeated_tickets++;
				last = tickets[i];
			}
		}
		
		cout << repeated_tickets << endl;
	}
    
	return 0;
}
