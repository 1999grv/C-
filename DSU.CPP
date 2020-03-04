#include<bits/stdc++.h>
using namespace std;
int father(int x,int arr[])
{
	if(arr[x]==x)
	{
		return x;
	}
	else
	{
		return father(arr[x],arr);
	}
}
void connect(int x,int y,int arr[])
{
	int xf=father(x,arr);
	int yf=father(y,arr);
	arr[yf]=xf;
}
int main()
{
		#ifndef ONLINE_JUDGE
		freopen("input.in","r",stdin);
		freopen("output.in","w",stdout);
		#endif
	int n,edges;
	cin>>n;
	cin>>edges;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=i;
	}
	for(int i=0;i<edges;i++)
	{
		int x,y;
		cin>>x>>y;
		connect(x,y,arr);
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
