#include <bits/stdc++.h>

using namespace std;
struct ForwardCall
{
	int beg;
	int end;
	int forwExten;
	ForwardCall(int aBeg, int aEnd,int aForwExten)
	:beg(aBeg),end(aEnd),forwExten(aForwExten)
	{
		
	}
};
int main()
{
	int n;
	cin >> n;
	cout << "CALL FORWARDING OUTPUT\n";
	for(int i = 0; i < n;i++)
	{
		cout << "SYSTEM " << i + 1 << "\n";
		map<int,vector<ForwardCall>> mp;
		int exten;
		while(cin >> exten and exten != 0)
		{
			int beg,end,forwExten;
			
			cin >> beg >> end >> forwExten;
			
			ForwardCall call(beg,end,forwExten);
			mp[exten].push_back(call);
			
		}
		int time,whom;
		
		while(cin >> time and time != 9000){
			cin >> whom;
			int whomFirst = whom;
			bool wasRedirect = false;
			
			call:
			if(wasRedirect and whom == whomFirst)
			{
				cout << "AT " <<setfill('0')<<setw(4)<< time << " CALL TO " <<setw(4)<< whomFirst << " RINGS 9999\n";
				continue;
			}
			auto p = mp.find(whom);
			
			
			if(p != mp.end())
			{
				vector<ForwardCall>& calls = p->second;
				for(int i = 0;i < calls.size();i++)
				{
					if(calls[i].beg <= time && time <= calls[i].beg + calls[i].end)
					{
						wasRedirect = true;
						whom = calls[i].forwExten;
						goto call;
					}
				}
				cout << "AT " <<setfill('0')<<setw(4)<< time << " CALL TO " <<setw(4)<< whomFirst << " RINGS " <<setw(4)<< whom << "\n";
			}else{
				cout << "AT " <<setfill('0')<<setw(4)<< time << " CALL TO " <<setw(4)<< whomFirst << " RINGS " <<setw(4)<< whom << "\n";
			}
			
		}
		
		
		
	}
	cout << "END OF OUTPUT\n";
	
	return 0;
}

