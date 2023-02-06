#include <bits/stdc++.h>
using namespace std;

int city_qnt = 0, road_qnt = 0;
vector<vector<int>> adj;
vector<bool>visited;
vector<int>new_road;


void f (int x)
{
	visited[x] = true;
  
	for (auto v : adj[x])
	{
		if (visited[v] == false) 
			f(v);
	}
}


int main ()
{
	cin >> city_qnt >> road_qnt;

	adj.resize(city_qnt + 1, vector<int>(0));
	visited.resize(city_qnt + 1);
	
	for (int i = 0; i < road_qnt; ++i)
	{
		int a, b;
		cin >> a >> b;
	  
		adj[a].push_back(b);
		adj[b].push_back(a);
    }

	for (int i = 1; i <= city_qnt; ++i)
	{
		if (visited[i] == false)
		{
			new_road.push_back(i);
			f(i);
		}
    }

	cout << new_road.size() - 1 << "\n";

	for (unsigned int i = 1; i < new_road.size(); ++i)
		cout << new_road[i -1] << " " << new_road[i] << "\n";
    
	return 0;
}
