
#include <bits/stdc++.h>

using namespace std;

int main()
{


	
	int n;
	cin >> n;
	int sz1,sz2;
	for(int i = 0;i < n;i++)
	{
		cin >> sz1 >> sz2;
		
		unordered_map<int,int> list1;
		unordered_map<int,int> list2;
		
		int deletions = 0;
		int value;
		//init
		for(int j = 0;j < sz1;j++)
		{
			cin >> value;
			bool ok = list1.insert({value,1}).second;
			if(!ok)
			{
				++list1[value];
			}
		}
		for(int j = 0;j < sz2;j++)
		{
			cin >> value;
			bool ok = list2.insert({value,1}).second;
			if(!ok)
			{
				++list2[value];
			}
			
		}
		
		//logic
		for(auto p = list1.begin(); p != list1.end();p++)
		{
			auto pf = list2.find(p->first);
		
			if(pf != list2.end())
			{
				deletions += abs(p->second - pf->second);
			}else{
				deletions += p->second;
			}
			
		}
		
		for(auto p = list2.begin(); p != list2.end();p++)
		{
			auto pf = list1.find(p->first);
		
			if(pf == list1.end())
			{
				deletions += p->second;
			}
			
		}
		cout << deletions << "\n";
		
	}

	return 0;
}




