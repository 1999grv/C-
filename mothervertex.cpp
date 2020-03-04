#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int h;
    cin>>h;
    int arr[n][n];
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=0;
        for(int j=0;j<n;j++)
        {
            arr[i][j]=0;
        }
    }
    for(int i=0;i<h;i++)
    {
        int x,y;
        cin>>x>>y;
        arr[x][y]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

        }
    }
}
