#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	for(int i = 0;i < t;i++)
	{
		int n;
		cin >> n;
		unordered_map<int,int> snowfl;
		
		int sequance = 0;
		int max = 0;
		int id;
		
		int beg = 1;
		
		

		for(int j = 1;j <= n;j++)
		{
			
			cin >> id;
			bool ok = snowfl.insert({id,j}).second;
			if(!ok)
			{
				
				
				sequance = j - beg;
				if(snowfl[id] >= beg)
				{
					beg = snowfl[id] + 1;
				}
				if(sequance > max)
				{
					max = sequance;
				}
				snowfl[id] = j;
				
			}
		}
		if(sequance == 0)
		{
			max = n;
		}
		sequance = n - beg + 1;
	
		if(sequance > max)
		{
			max = sequance;
		}
		
		cout << max << "\n";
		
	}
	return 0;
}
//1 2 3 2 1
//1 2 3 2 4 5
