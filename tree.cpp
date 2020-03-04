#include<bits/stdc++.h>
using namespace std;
int main()
{
		#ifndef ONLINE_JUDGE
		freopen("input.in","r",stdin);
		freopen("output.in","w",stdout);
		#endif
		vector<long> v;
		long n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			long x;
			cin>>x;
			v.push_back(x);
		}
		vector<long> t;
		v.push_back(9);
		for(int i=0;i<v.size();i++)
		{
			if(v[i]%2==0)
			{
				t.push_back(v[i]);
			}
			else
			{
				if(t.size()!=0)
				{
					reverse(t.begin(),t.end());
					for(long j=0;j<t.size();j++)
					{
						cout<<t[j]<<" ";
					}
					t.clear();
				}
				if(i!=v.size()-1)
				{
				cout<<v[i]<<" ";
			}
			}
		}
}