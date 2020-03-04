#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n+=1;
    int edges;
    cin>>edges;
    int arr[n][n];
    int ar[n];
    int prd[n];
    for(int i=0;i<n;i++)
    {
        ar[i]=0;
        prd[i]=0;
        for(int j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
    for(int i=0;i<edges;i++)
    {
        int x;
        int y;
        cin>>x;
        cin>>y;
        arr[x][y]=1;
    }
    stack<int> s;
    int source;
    cin>>source;
    s.push(source);
    int ctr=0;
    while(ctr!=edges)
    {
        int x;
        x=s.top();
        s.pop();int grv=0;
        for(int i=0;i<n;i++)
        {
            if(arr[x][i]==1&&ar[i]==0)
            {
                s.push(i);
                ar[i]=1;
                cout<<s.top();
                prd[i]=x;
                ctr++;
                grv++;
                break;
            }
        }
        if(grv==0)
        {
            s.push(prd[x]);
        }
    }
}
