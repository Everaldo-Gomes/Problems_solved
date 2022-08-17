#include <bits/stdc++.h>

int main()
{
	int n, minimum = 100000000, maximum = 0, result = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input;
		std::cin >> input;	

		if (i > 0 && (input < minimum || input > maximum))
		{
			result++;
		}

		if (input < minimum)
		{
			minimum = input;
		}

		if (input > maximum)
		{
			maximum = input;
		}
	}

	std::cout << result << std::endl;
	return 0;
}	
