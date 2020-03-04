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
bool connect(int x,int y,int arr[])
{
    int xf=father(x,arr);
    int yf=father(y,arr);
    if(xf!=yf)
    {
    arr[yf]=xf;
    return true;
    }
    else
    {
        return false;
    }
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
    vector<pair<int,pair<int,int> > > v;
    for(int i=0;i<edges;i++)
    {
        int x;
        int y;
        int cst;
        cin>>x;
        cin>>cst;
        cin>>y;
        v.push_back(make_pair(cst,make_pair(x,y)));
    }
    sort(v.begin(),v.end());
    int adj[n][n];
    for(int i=0;i<n;i++)
    {
        arr[i]=i;
        for(int j=0;j<n;j++)
        {
            adj[i][j]=0;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(connect(arr[v[i].second.first],arr[v[i].second.second],arr))
        {
            adj[v[i].second.first][v[i].second.second]=v[i].first;
            adj[v[i].second.second][v[i].second.first]=v[i].first;
        }
    }
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
        cout<<arr[i]<<" ";
    }
    int ct[n];
    stack<int> s;
    int src;
    cin>>src;
    int dst;
    cin>>dst;
    s.push(src);
    ct[src]=0;
    cout<<endl;
    int flag[n];
    for(int i=0;i<n;i++)
    {
        flag[i]=-1;
    }
    flag[src]=0;
    while(s.size()!=0)
    {
        cout<<s.top();
        int x=s.top();
        s.pop();int y=0;int t=0;
        for(int i=n-1;i>-1;i--)
        {
            if(adj[x][i]!=0&&flag[i]==-1)
            {
                ct[i]=ct[x]+adj[x][i];
                flag[i]=0;
                if(i==dst)
                {
                y=i;
                t=1;
                break;
                }
                s.push(i);
            }
        }
        if(t==1)
        {
            cout<<endl;
            cout<<ct[y]<<endl;
            cout<<y;
            break;
        }
    }
}