#include<bits/stdc++.h>
using namespace std;
int main()
{
		#ifndef ONLINE_JUDGE
		freopen("input.in","r",stdin);
		freopen("output.in","w",stdout);
		#endif
	int n,e;
	cin>>n>>e;
	n+=1;
	int arr[n];
	char arc[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=i;
		arc[i]='0';
	}
	vector<pair<pair<int,int>,char> > v;
	for(int i=0;i<n-2;i++)
	{
		int x,y;char c;
		cin>>x>>y>>c;
		arc[y]=c;
		v.push_back(make_pair(make_pair(x,y),c));
		arr[y]=x;
	}
	while(e--)
	{
		vector<char> vc;
	int x;
	cin>>x;
	if(x==1)
	{
		cout<<1<<endl;
	}
	else
	{
	while(arr[x]!=x)
	{
		//cout<<x<<" ";
		if(arc[x]=='L')
		{
			vc.push_back('R');
		}
		else if(arc[x]=='R')
		{
			vc.push_back('L');
		}
		x=arr[x];
	}
	reverse(vc.begin(),vc.end()); int r=1;int ctr=0;int g=0;
	while(ctr!=vc.size())
	{
		if(g==v.size())
		{
			cout<<-1<<endl;
			break;
		}
		if(v[g].first.first==r&&v[g].second==vc[ctr])
		{
			//cout<<vc[ctr]<<endl;
			r=v[g].first.second;
			ctr++;
		}
		g++;
	}
	if(g<v.size())
	{
		cout<<r<<endl;
	}
}
}
}