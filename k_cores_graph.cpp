#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int edges;
    cin>>edges;
    //int src;
    //cin>>src;
    int arr[n];
    int adj[n][n];
    for(int i=0;i<n;i++)
    {
        arr[i]=0;
        for(int j=0;j<n;j++)
        {
            adj[i][j]=0;
        }
    }
    for(int i=0;i<edges;i++)
    {
        int x;
        int y;
        cin>>x;
        cin>>y;
        adj[x][y]=1;
        adj[y][x]=1;
    }
    cout<<endl;
    cout<<"ENTER THE K-CORE LIMIT"<<endl;
    int k;
    cin>>k;
    vector<int> pt;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<adj[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=adj[i][j];
        }
        if(sum<k)
        {
            pt.push_back(i);
        }
    }
    for(int i=0;i<pt.size();i++)
    {
        cout<<pt[i]<<" ";
        for(int j=0;j<n;j++)
        {
            adj[pt[i]][j]=0;
            adj[j][pt[i]]=0;
        }
    }
    cout<<endl;
    int mark[n];
    for(int i=0;i<n;i++)
    {
        mark[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<adj[i][j]<<" ";
            if(adj[i][j]==1)
            {
                if(mark[i]==0)
                {
                    mark[i]=i;
                    mark[j]=i;
                }
                else
                {
                    mark[j]=i;
                }
            }
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<mark[i]<<" ";
    }
}

