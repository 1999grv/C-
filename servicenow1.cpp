#include<bits/stdc++.h>
using namespace std;
int main()
{
		#ifndef ONLINE_JUDGE
		freopen("input.in","r",stdin);
		freopen("output.in","w",stdout);
		#endif
		int n,m,t,c;
		//cout<<"kj";
		//n+=1;
		cin>>n>>m>>t>>c;
		n+=1;
		int arr[n];
		int prt[n];
		int adj[n][n];
		int cost[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=0;
			cost[i]=0;
			prt[i]=i;
			for(int j=0;j<n;j++)
			{
				adj[i][j]=0;
			}
		}
		for(int i=0;i<m;i++)
		{
			int u;
			int v;
			cin>>u;
			cin>>v;
			adj[u][v]=c;
			adj[u][v]=c;
		}
		vector<int> v;
		stack<int> s;
		int src,dst;
		cin>>src>>dst;
		s.push(src);
		arr[src]=1;
		cost[src]=0;
		while(s.size()!=0)
		{
			int x=s.top();
			s.pop();int t=0;
			for(int i=0;i<n;i++)
			{
				if(adj[x][i]!=0&&arr[i]==0)
				{
					s.push(i);
					arr[i]=1;
					prt[i]=x;
					if(i==dst)
					{
						t=1;
					}
					if(i!=dst)
					{
					if(cost[i]>cost[x]+adj[x][i]||cost[i]==0)
					{
						prt[i]=x;
					cost[i]=cost[x]+adj[x][i];
					}
				}
				}
			}
			if(t==1)
			{
				if(cost[dst]<=c)
			{
				//cout<<endl;
				//cout<<cost[dst];
			}
			else
			{
				for(int i=c;i<cost[dst];i++)
				{
					if((i/t)%2!=0)
					{
						if(i%t!=0)
						{
							cost[dst]+=(t-i%t);
						}
					}
					else if((i/t)%2==0)
					{
						if(i%t==0)
						{
							cost[dst]+=t;
						}
					}
					i=i+c;
				}
			}
								if(cost[dst]>cost[x]+adj[x][dst]||cost[dst]==0)
					{
						prt[dst]=x;
					cost[dst]=cost[x]+adj[x][dst];
					}
		}
		}
		//cout<<endl;
		v.push_back(dst);
		int u=dst;
		while(prt[u]!=u)
		{
			u=prt[u];
			v.push_back(u);
		}
		reverse(v.begin(),v.end());
		//cout<<endl;
			/*if(cost[dst]<=c)
			{
				//cout<<endl;
				cout<<cost[dst];
			}
			else
			{
				for(int i=c;i<cost[dst];i++)
				{
					if((i/t)%2!=0)
					{
						if(i%t!=0)
						{
							cost[dst]+=(t-i%t);
						}
					}
					else if((i/t)%2==0)
					{
						if(i%t==0)
						{
							cost[dst]+=t;
						}
					}
					i=i+c;
				}
			//cout<<endl;
			cout<<cost[dst];*/
		cout<<cost[dst];
			cout<<endl;
			for(int i=0;i<v.size();i++)
			{
				cout<<v[i]<<" ";
			}
}
