#include <bits/stdc++.h>
using namespace std;
bool my_predicate(char c)
{
	if(c > 'z' or c < 'a')
	{
		return true;
	}
	return false;
}
int main()
{
	set<string> words;
	string text;
	
	while(getline(cin,text)){
		
		transform(text.begin(),text.end(),text.begin(),::tolower);
		replace_if(begin(text),end(text),my_predicate,' ');
		istringstream sinp(text);
		string word;
		while(sinp >> word)
		{
			
			words.insert(word);
			
		}
		
	}
	for(auto i = words.begin();i != words.end();i++)
	{
		cout << *i << "\n";
	}
	
	return 0;
}