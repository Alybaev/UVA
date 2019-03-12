#include <bits/stdc++.h>

using namespace std;
double round(double var) 
{ 
	// 37.66666 * 100 =3766.66 
	// 3766.66 + .5 =37.6716 for rounding off value 
	// then type cast to int so value is 3766 
	// then divided by 100 so the value converted into 37.66 
	double value = (int)(var * 10 + .5); 
	return (double)value / 10; 
} 
int main()
{
	int peop;
	cin >> peop;
	
	unordered_map<string,double> spis;
	
	int test;
	cin >> test;
	
	for(int i = 0;i < peop;i++)
	{
		string name;
		cin >> name;
		double value;
		cin >> value;
		
		spis.insert({name,value});
		
	}
	
	for(int i = 0;i < test;i++)
	{
		string name;
		string oper;
		
		double sum = 0;
		while(cin >> name >> oper and oper == "+")
		{
			sum += spis[name];
			
			
		}
		sum += spis[name];
		sum = round(sum);
		int comp;
		cin >> comp;
		bool res = false;
		
		if (oper == "<"){
			
			res = (sum < (double)(comp));
			
		}else if(oper == ">")
		{
			res = (sum > (double)(comp));
		}
		else if (oper ==">=")
		{
			res = (sum >= (double)(comp));
		
		}else if (oper == "<=")
		{
			res = (sum <= (double)(comp));
			
		}else{
			res = (sum == (double)(comp));	
		}
		
		
		cout << "Guess #" << i+1 << " was " << ((res) ? "correct.\n" : "incorrect.\n");
		
	}
	return 0;
}

