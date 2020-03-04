#include <bits/stdc++.h>
using namespace std;
bool checkYear(int year)
{
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;
    return false;
}
int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3,
                       5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y / 4 - y / 100 +
             y / 400 + t[m - 1] + d) % 7;
}
int main()
{
    //int day = dayofweek(15, 2, 2020);
    //cout << day;
    long t;
    cin>>t;
    int arr1[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    int arr2[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    while(t--)
    {
        long ans=0;
        long m1,y1,m2,y2;
        cin>>m1;
        cin>>y1;
        cin>>m2;
        cin>>y2;
        if(m1==m2&&y1==y2)
        {
            cout<<"1";
            long dayf=0;long days;long ctr=0;long x=1;long oy;
                while(dayf!=5)
                {
                    dayf = dayofweek(x, m1, y1);
                    x++;
                }
                cout<<"2";
                x=x-1;
                cout<<x<<endl;
                char c;
                if(checkYear(y1))
                {
                    cout<<"1";
                    c='l';
                }
                else
                {
                    c='n';
                }
                if(c=='l')
                {
                    cout<<"2";
                    long y=arr1[m1];
                    while(ctr!=2)
                    {
                        days = dayofweek(y, m1, y1);
                        if(days==0)
                        {
                            ctr++;
                        }
                        y--;
                    }
                    oy=y;
                }
                else
                {
                    long y=arr2[m1];
                    while(ctr!=2)
                    {
                        days = dayofweek(y, m1, y1);
                        if(days==0)
                        {
                            ctr++;
                        }
                        y--;
                    }
                    oy=y;
                }
                cout<<oy<<endl;
                if(oy<x+10&&oy>=x)
                {
                  ans++;
                }
        }
        else
        {
            cout<<"andr"<<endl;
            while(m1!=m2&&y1!=y2)
            {
                long dayf;long days;long ctr=0;long x=1;long oy;
                while(dayf!=5)
                {
                    dayf = dayofweek(x, m1, y1);
                    x++;
                }
                x=x-1;
                char c;
                if(checkYear(y1))
                {
                    c='l';
                }
                else
                {
                    c='n';
                }
                if(c=='l')
                {
                    long y=arr1[m1];
                    while(ctr!=2)
                    {
                        days = dayofweek(y, m1, y1);
                        if(days==0)
                        {
                            ctr++;
                        }
                        y--;
                    }
                    oy=y;
                }
                else
                {
                    long y=arr2[m1];
                    while(ctr!=2)
                    {
                        days = dayofweek(y, m1, y1);
                        if(days==0)
                        {
                            ctr++;
                        }
                        y--;
                    }
                    oy=y;
                }
                cout<<"x is"<<x<<"y is "<<oy<<"m and y"<<m1<<" "<<y1<<endl;
                if(oy<x+10&&oy>=x)
                {
                  ans++;
                }
                if(m1==12)
                {
                    y1++;
                    m1=1;
                }
                else
                {
                    m1++;
                }
            }
            long dayf;long days;long ctr=0;long x=1;long oy;
                while(dayf!=5)
                {
                    dayf = dayofweek(x, m1, y1);
                    x++;
                }
                x=x-1;
                char c;
                if(checkYear(y1))
                {
                    c='l';
                }
                else
                {
                    c='n';
                }
                if(c=='l')
                {
                    long y=arr1[m1];
                    while(ctr!=2)
                    {
                        days = dayofweek(y, m1, y1);
                        if(days==0)
                        {
                            ctr++;
                        }
                        y--;
                    }
                    oy=y;
                }
                else
                {
                    long y=arr2[m1];
                    while(ctr!=2)
                    {
                        days = dayofweek(y, m1, y1);
                        if(days==0)
                        {
                            ctr++;
                        }
                        y--;
                    }
                    oy=y;
                }
                if(oy<x+10&&oy>=x)
                {
                  ans++;
                }
        }
        cout<<ans<<endl;
    }

    return 0;
}
