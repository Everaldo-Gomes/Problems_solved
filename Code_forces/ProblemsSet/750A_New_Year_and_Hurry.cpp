#include <bits/stdc++.h>

int main()
{
	int qnt_problems,
		time_needed,
		time_left,
		problem_n = 1,
		qnt_solved = 0;

	std::cin >> qnt_problems >> time_needed;
	time_left = 240 - time_needed;

	while(time_left - (problem_n * 5) >= 0 && qnt_problems > 0)
	{
		time_left -= problem_n * 5;
		problem_n++;
		qnt_solved++;
		qnt_problems--;
	}
	
	std::cout << qnt_solved << std::endl;
	return 0;
}
