

#include <bits/stdc++.h>
using namespace std;
int countPopular(const map<set<int>,int>& mp)
{
	vector<int> combinations;
	for(auto& pair : mp)
	{
		combinations.push_back(pair.second);
	}
	auto maxElem = max_element(combinations.begin(),combinations.end());
	int c = count(combinations.begin(),combinations.end(),*maxElem);
	return c * *maxElem;
	
}
	

int main()
{
	ios_base::sync_with_stdio(false);
	int frosh;
	
	while(cin >> frosh and frosh != 0)
	{
		map<set<int>,int> mp;
		for(int i = 0;i < frosh;i++){
			set<int> courses;
			int course;
			
			for(int i = 0;i < 5;i++)
			{
				cin >> course;
				courses.insert(course);
			}
			
			if(mp.insert({courses,1}).second == false)
			{
				++mp[courses];
			}
		}
		
		cout << countPopular(mp) << "\n";
		
	}
	
		
	return 0;
}