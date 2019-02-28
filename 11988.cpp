#include <bits/stdc++.h>
using namespace std;
int main()
{
	string line;
	while(getline(cin,line))
	{
		list<char> res;
		auto it = res.begin();
		for(char c : line)
		{
			if(c == '[')
			{
				it = res.begin();
			}else if(c == ']'){
				it = res.end();
			}else{
				res.insert(it,c);
			}
		}
		cout << string(res.begin(),res.end()) << "\n";
	}
	return 0;
}