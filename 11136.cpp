
#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	while(cin >> n and n != 0){
		
		long long price = 0;
		multiset<long long> bills;
		
		for(int i = 0;i < n;i++)	
		{
			int k;
		
			
			cin >> k;
			for(int j = 0;j < k;j++)
			{
				long long bill;
				cin >> bill;
				bills.insert(bill);
				
				
				
			}
			
			auto lowest = bills.begin();
			auto highest  = --bills.end();
		
			price += *highest - *lowest;
			
			bills.erase(lowest);
			bills.erase(highest);
			
			
			
			
			
		}
		cout << price << "\n";
	}
	return 0;
}



