#include<bits/stdc++.h>
using namespace std;
int ans=INT_MAX;
int mn(int x,int y);
int mncst(int arr[],int pos,int n,int cst,int curr)
{
	if(pos>=n)
	{
		// cout << cst << " ";
		ans=mn(ans,cst);
		return cst;
	}
	else
	{
		cst+=abs(arr[curr]-arr[pos]);
		return mn(mncst(arr,pos+1,n,cst,pos),mncst(arr,pos+2,n,cst,pos));
	}
}
int mn(int x,int y)
{
	if(x<y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.in","r",stdin);
	freopen("output.in","w",stdout);
	#endif
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int pos=0;
	int an=mncst(arr,pos,n,0,0);
	cout<<an;
	cout<<ans;
}