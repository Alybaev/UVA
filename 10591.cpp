#include <bits/stdc++.h>
using namespace std;

	
long int countSumOfSquareDigits(long int& num)	
{
	int sumOfSquareDig = 0;
	
	do
	{
		sumOfSquareDig += (num % 10) * (num % 10);
		num /= 10;
	} while(num > 0);
	
	return sumOfSquareDig;
}	

int main()
{
	ios_base::sync_with_stdio(false);
	
	long int n;
	cin >> n;
	
	long int num;
	
	for(int i = 0;i < n;i++)
	{
		string res = "a Happy";
		
		set<long int> nums;
		
		cin >> num;
		int t = num;
		
		while(num != 1)
		{
				
			num = countSumOfSquareDigits(num);
			
			if(nums.insert(num).second == false)
			{
				res = "an Unhappy";
				goto Res;
			}
			
		}
		
		Res:
		cout << "Case #" << i + 1 << ": "<< t <<" is "<< res <<" number." << "\n";  
		
	}
	
	
		
	return 0;
}