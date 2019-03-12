#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		int subj;
		cin >> subj;
		unordered_map<string,int> mp;
		for(int i = 0;i < subj;i++)
		{
			string subjName;
			cin >> subjName;
			int days;
			cin >> days;
			mp.insert({subjName,days});
		}
		int d;
		cin >> d;
		string subjName2;
		cin >> subjName2;
		auto it = mp.find(subjName2);
		if(it != mp.end())
		{
			d -= mp[subjName2];
			if(d >= 0){
				cout << "Case "<<i+1<<": Yesss"<<"\n";
			}else if(d >= -5){
				cout << "Case "<<i+1<<": Late"<<"\n";
			}else{
				cout << "Case "<<i+1<<": Do your own homework!"<<"\n";
			}
		}else{
			cout << "Case "<<i+1<<": Do your own homework!"<<"\n";
		}
		
		
	}
	return 0;
}

