#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	int n = 0;
	std::cin >> n;

	while (n--)
	{

		int l_qnt;
		std::cin >> l_qnt;

		std::string name;
		std::cin>> name;

		sort(name.begin(), name.end());
	
		if (name == "Timru")
		{
			std::cout << "YES" << "\n";
		}
		else
		{
			std::cout << "NO" << "\n";
			
		}
	}
	
	return 0;
}
