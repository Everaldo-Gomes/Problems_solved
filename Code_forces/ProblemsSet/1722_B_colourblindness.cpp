#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	int n = 0;
	std::cin >> n;

	while (n--)
	{		
		int column;
		std::cin >> column;
		
		std::string str1, str2;
		bool can = true;

		getchar();
		getline(std::cin, str1);
		getline(std::cin, str2);
			
		for (int i = 0; i < column; i++)
		{
			if (str1[i] != str2[i] && (str1[i] == 'R' || str2[i] == 'R'))
			{
				can = false;
				break;
			}	
		}
		
		if (can)
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	
	return 0;
}
