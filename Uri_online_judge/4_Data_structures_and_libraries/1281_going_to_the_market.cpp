#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

struct Product {

	string name;
	double price;
};

struct ShopList {

	string name;
	int qnt;
};

int main () {

	int n;
	cin >> n;

	while (n--) {

		// produt at the market
		int prod_qnt;
		cin >> prod_qnt;

		Product product[prod_qnt];
		int prod_counter = 0;

		while (prod_qnt--) {

			string prod_name;
			double prod_price;

			cin >> prod_name >> prod_price;
			product[prod_counter].name = prod_name;
			product[prod_counter].price = prod_price;
			prod_counter++;
		}

		// shop list
		int itens_qnt;
		cin >> itens_qnt;

		ShopList shop_list[itens_qnt];
		int item_counter = 0;
		
		while (itens_qnt--) {

			string prod_name;
			int prod_qnt;

			cin >> prod_name >> prod_qnt;
			shop_list[item_counter].name = prod_name;
			shop_list[item_counter].qnt = prod_qnt;
			item_counter++;
		}

		// shopping
		double total = 0.0;

		for (int i = 0; i < item_counter; i++) {
			for (int j = 0; j < prod_counter; j++) {
				if (shop_list[i].name == product[j].name) {
					total += shop_list[i].qnt * product[j].price;
				}
			}
		}
		
		cout << setprecision(2) << fixed << "R$ " << total << endl;
	}
	
	
	return 0;
}
