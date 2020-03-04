#include<bits/stdc++.h>
using namespace std;
void showq(queue <long> gq)
{
    queue <long> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}
int main()
{
    long n;
    cin>>n;
    long h;
    cin>>h;
    n+=1;
    long arr[n];
    long arr1[n][n];
    for(long i=0;i<n;i++)
    {
        arr[i]=0;
        for(long j=0;j<n;j++)
        {
            arr1[i][j]=0;
        }
    }
    map<pair<int,int>,int> g;
    for(long i=0;i<h;i++)
    {
        long x,y,cost;
        cin>>x;
        cin>>y;
        cin>>cost;
        g.insert(make_pair(x,y),cost);
        arr1[x][y]=1;
    }
    int cst[n];
    for(int i=0;i<n;i++)
    {
        cst[i]
    }
    int source;
    cin>>source;
    queue<long> q;
    q.push(source);
    arr[source]=1;
    int prd[n];
    for(int i=0;i<n;i++)
    {
        prd[i]=-1;
    }
    while(!q.empty())
    {
        cout<<q.front();
        for(long i=0;i<=n;i++)
        {
            if(arr1[q.front()][i]==1&&arr[i]==0)
            {
                q.push(i);
                if(prd[i]==-1)
                {
                    prd[i]=q.front();
                }
                arr[i]=1;
            }
        }
        q.pop();
        showq(q);
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<prd[i];
    }
}
