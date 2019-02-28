#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int n;
	cin >> n;
	map<string,int> trees;
	cin.ignore();
	string empty;
	getline(cin,empty);
	for(int i = 0;i < n;i++)
	{
		if(i != 0){
			cout << "\n";
		}
		trees.clear();
		int total = 0;
		
		string tree;
		while(getline(cin,tree))
		{	
			
			if(tree.empty() )
			{
				break;
			}
			bool ok = trees.insert({tree,1}).second;
			if(!ok){
				++trees[tree];
			}
			++total;
		}
		
		for(auto& it : trees)	
		{
			
			cout << it.first << " " << fixed << setprecision(4) << 100.0 / total * it.second << "\n";
		}
		
	
		
	}
	
	return 0;
}