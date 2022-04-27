#include <bits/stdc++.h>
using namespace std;

struct Hash_table {
	
	int value;
	struct Hash_table *next;
	struct Hash_table *table[200];
};

int main () {

	int n;
	cin >> n;

	while (n--) {

		int hash_size, qnt_value;
		cin >> hash_size >> qnt_value;

		// create N new head in the I position
		struct Hash_table *array_index = new Hash_table;
		
		for (int i = 0; i < qnt_value; i++) {
			array_index->table[i] = NULL;		
		}
	    
		for (int i = 0; i < qnt_value; i++) {

			// get info
			int value;
			cin >> value;
			
			int key = value % hash_size;
			
            // create new node and save the value
			// insert in the end of the list
			struct Hash_table *node = new Hash_table;
			struct Hash_table *last = new Hash_table;
			last = array_index->table[key];
			
			node->value = value;
			node->next = NULL;

			if (array_index->table[key] == NULL) {
				array_index->table[key] = node;
			}
			else {
				while (last->next != NULL) {
					last = last->next;
				}
				last->next = node;
			}
		    
			// insert in front of the list
			// node->next = array_index->table[key];
			// array_index->table[key] = node;
		}
		
		struct Hash_table *p = new Hash_table;
		
		for (int i = 0; i < hash_size; i++) {
			
			p = array_index->table[i];
			
			cout << i << " -> ";

			while (p != NULL) {
				cout << p->value; 
				p = p->next;
				cout << " -> ";
			}

			cout << "\\\n";
		}
		

		if (n > 0) {
			cout << "\n";
		}
		
	}
	
	return 0;
}
