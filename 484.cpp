
#include <bits/stdc++.h>

using namespace std;

int main()
{


	unordered_map<int,int> nums;
	vector<int> sequence;
	int value;
	
	while(cin >> value)
	{
		bool ok = nums.insert({value,1}).second;
		if(!ok)
		{
			++nums[value];
		}else{
			sequence.push_back(value);
			
		}
	
		
		
		
	}

	for(int j = 0 ;j < sequence.size();j++)
	{
		cout << sequence[j] << " " << nums[sequence[j]] << endl;
	}
	return 0;
}




