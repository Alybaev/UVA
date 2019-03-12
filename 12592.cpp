#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	unordered_map<string,string> mp;
	cin.ignore();
	for(int i = 0;i < n;i++)
	{
		string firstLine;
		getline(cin,firstLine);
		
		string secondLine;
		getline(cin,secondLine);
		
		mp.insert({firstLine,secondLine});
	}
	int slogan;
	
	cin >> slogan;
	cin.ignore();
	for(int i = 0;i < slogan;i++)
	{
		string first;
		getline(cin,first);

		auto it = mp.find(first);
		
		cout << it->second << "\n";
		
		
	}
	
	return 0;
}

