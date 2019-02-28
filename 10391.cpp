#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<string> words;
	
	string word;
	string part1,part2;
	while(getline(cin,word))
	{
		words.insert(word);
	}
	for(auto iter = words.begin();iter != words.end();++iter)
	{
		for(int sz = (*iter).size() - 1;sz >= 1;--sz)
		{
			part1 = (*iter).substr(0,sz);
			part2 = (*iter).substr(sz);
			auto it = words.find(part1);
			auto it2 = words.find(part2);
			if(it != words.end() and it2 != words.end())
			{
				cout << *it << *it2 << "\n";
				break;
			}
		}
		
	}
	
	return 0;
}