#include <bits/stdc++.h>
using namespace std;
int main()
{
	int size1,size2;
	while(cin >> size1 >> size2){
		
		int count = 0;
		if(size1 == 0 and size2 == 0){
			break;	
		}
		unordered_set<int> nums1;
		unordered_set<int> nums2;
		
		for(int i = 0;i < size1;i++)
		{
			int num;
			cin >> num;
			nums1.insert(num);
		}
		for(int i = 0;i < size2;i++)
		{
			int num;
			cin >> num;
			auto it = nums1.find(num);
			if(it != nums1.end())
			{
				++count;
			}
		}
		cout << count << "\n";
	}
	return 0;
}