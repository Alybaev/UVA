
#include <bits/stdc++.h>

using namespace std;
void printSet(multiset<int>& s,int& i,int& n)
{
	
	for(auto p = s.rbegin();p != s.rend();p++)
	{
		cout << *p << "\n";
		
	}
	if(i != n - 1)
	{
		cout << "\n";
	}
}
int main()
{

	int n;
	cin >> n;
	for(int i = 0;i < n;i++)	
	{
		
		int b,green,blue;
		multiset<int> powerGr;
		multiset<int> powerBl;
		//init
		cin >> b >> green >> blue;
		int health;
		for(int j = 0;j < green;j++)
		{
			cin >> health;
			powerGr.insert(health);
		}
		
		for(int j = 0;j < blue;j++)
		{
			cin >> health;
			powerBl.insert(health);
		}
		
		//logic
		while(true){
			
			if(powerGr.empty() || powerBl.empty()){
				if(powerGr.empty() and powerBl.empty()){
					cout << "green and blue died\n\n";
				}else if(powerGr.empty()){
					cout << "blue wins\n";
					printSet(powerBl,i,n);
				}else if(powerBl.empty()){
					cout << "green wins\n";
					printSet(powerGr,i,n);
				}
				break;
			}
			
			int minim = min(powerGr.size(),powerBl.size());
			minim = min(minim,b);
			
			multiset<int> survivers;
			
			
			
			for(int j = 0;j < minim;++j){
				auto p1 = --powerGr.end();
				auto p2 = --powerBl.end();				
				 if(*p1 != *p2)
				{
					survivers.insert(*p1 - *p2);
				}
				
				powerGr.erase(p1);
				
				powerBl.erase(p2);	
				
			}
			
			//reload
			for(auto p = survivers.begin();p != survivers.end();p++)
			{
				if(*p > 0)
				{
					powerGr.insert(*p);
				}else{
					powerBl.insert(abs(*p));
				}
			}
		}
		
		
		
	}
	return 0;
}

// 3
// 30 40 40 50 50
// 20 30 30 50 60
//       10 0 -10
// 30 40 10
// 20 30 10
// 10 10 0  

