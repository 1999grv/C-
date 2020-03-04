#include<bits/stdc++.h>
using namespace std;
int main()
{
	 	ios_base::sync_with_stdio (false); 
	 	cin.tie(NULL);
		#ifndef ONLINE_JUDGE
		freopen("input.in","r",stdin);
		freopen("output.in","w",stdout);
		#endif
		long t;
		cin>>t;
		while(t--)
		{
			long n;
			cin>>n;
			vector<long> v;
			for(int i=0;i<n;i++)
			{
				long x;
				cin>>x;
				if(x==0)
				{
					v.push_back(-i);
					v.push_back(i);
				}
				else
				{
					v.push_back(x+i);
				}
			}
			sort(v.begin(),v.end());
			cout<<(abs(v[n-1]-v[0]))<<endl;
		}
}