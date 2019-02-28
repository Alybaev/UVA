#include <bits/stdc++.h>
using namespace std;
bool my_predicate(char c)
{
	if((c > 'z' or c < 'a') and c != '-')
	{
		return true;
	}
	return false;
}
int main()
{
	set<string> words;
	string text;
	string hyphenWord = "";
	while(getline(cin,text)){
		
		transform(text.begin(),text.end(),text.begin(),::tolower);
		replace_if(begin(text),end(text),my_predicate,' ');
		
		istringstream sinp(text);
		string word;
		
		
		while(sinp >> word)
		{
			if(word[word.size() - 1] == '-' and sinp.eof())
			{
				hyphenWord += word;
				hyphenWord = hyphenWord.substr(0, hyphenWord.size()-1);
			
			} else if(!hyphenWord.empty()){
				
				words.insert(hyphenWord + word);
				hyphenWord = "";
				
			}else{
				words.insert(word);
			}
			
		}
	}
	for(auto i = words.begin();i != words.end();i++)
	{
		cout << *i << "\n";
	}
	

	
	return 0;
}