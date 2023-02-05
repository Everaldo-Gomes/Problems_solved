#include <bits/stdc++.h>
using namespace std;

int r, c, room_qnt = 0;
pair<int, int> param;
queue<pair<int, int>> q;
vector<int> d {-1, 0, 1};
vector<vector<string>> building (0, vector<string>(0));

void bfs()
{
	int i = param.first;
	int j = param.second;

	for (auto dx : d)
	{
		if (i + dx < 0 || i + dx >= r)
			continue;
		    
		if (building[i + dx][j] == "#")
			continue;
		    
		building[i + dx][j] = "#";
		q.push(make_pair(i + dx, j));
	}
	
	for (auto dy : d)
	{
		if (j + dy < 0 || j + dy >= c)
			continue;
		    
		if (building[i][j + dy] == "#")
			continue;
		    
		building[i][j + dy] = "#";
		q.push(make_pair(i, j + dy));
	}
}


int main ()
{
	cin >> r >> c;
	building.resize(r, vector<string>(c));

	for (int i = 0; i < r; ++i)
	{
		string l;
		cin >> l;
		
		for (unsigned int j = 0; j < l.size(); ++j)
			building[i][j] = l[j];				  
	}

	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			if (building[i][j] == ".")
			{
				++room_qnt;
				q.push(make_pair(i,j));
				
				while (!q.empty())
				{
					param = q.front();
					q.pop();
					bfs();
				}	
			}
		}
	}

	cout << room_qnt << "\n";
	return 0;
}

