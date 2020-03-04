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
    vector<long> fans;
    int t;
    cin>>t;
    int arr1[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    int arr2[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    while(t--)
    {
        int ans=0;
        int m1,y1,m2,y2;
        int rm;
        cin>>m1;
        rm=m1;
        cin>>y1;
        cin>>m2;
        cin>>y2;
        if(m1==m2&&y1==y2)
        {
            int dayf=0;int days=0;int ctr=0;int x=1;int oy=0;
                while(dayf!=5)
                {
                    dayf = dayofweek(x, m1, y1);
                    x++;
                }
                x-=1;
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
                    int y=arr1[m1];
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
                    int y=arr2[m1];
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
                    cout<<m1<<" "<<y1<<endl;
                    ans++;
                    fans.push_back(y1);
                }
                if(fans.size()>=2)
                {
                    if(fans[fans.size()-1]-fans[fans.size()-2]==6)
                    {
                        break;
                    }
                }
        }
        else
        {
            int cr=0;
            if(m1!=m2&&y1!=y2)
            {
                cr=0;
            }
            while(cr==0)
            {
                int dayf=0;int days=0;int ctr=0;int x=1;int oy=0;
                while(dayf!=5)
                {
                    dayf = dayofweek(x, m1, y1);
                    x++;
                }
                x-=1;
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
                    int y=arr1[m1];
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
                    int y=arr2[m1];
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
                  cout<<m1<<" "<<y1<<endl;
                  ans++;
                  fans.push_back(y1);
                }
                if(fans.size()>=2)
                {
                    if(fans[fans.size()-1]-fans[fans.size()-2]==6)
                    {
                        break;
                    }
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
                if(m1==m2&&y1==y2)
                {
                    cr=1;
                }
            }
            int dayf=0;int days=0;int ctr=0;long x=1;long oy=0;
                while(dayf!=5)
                {
                    dayf = dayofweek(x, m1, y1);
                    x++;
                }
                x-=1;
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
                    int y=arr1[m1];
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
                    int y=arr2[m1];
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
                    cout<<m1<<" "<<y1<<endl;
                    ans++;
                    fans.push_back(y1);
                }
                if(fans.size()>=2)
                {
                    if(fans[fans.size()-1]-fans[fans.size()-2]==6)
                    {
                        break;
                    }
                }
        }
        long h=fans[fans.size()-1];
        long g=h;
        cout<<g<<endl;
        h=(y2-h)/28;
        if(h<1)
        {
            if(g<y2)
            {
                g+=5;
                ans++;
                cout<<g<<endl;
            }
            else
            {
                cout<<g<<endl;
                break;
            }
            if(g<y2)
            {
                cout<<g<<endl;
                g+=1;
                ans++;
            }
            else
            {
                cout<<g<<endl;
                break;
            }
            if(g<y2)
            {
                cout<<g<<endl;
                g+=5;
                ans++;
            }
            else
            {
                cout<<g<<endl;
                break;
            }
            if(g<y2)
            {
                cout<<g<<endl;
                g+=5;
                ans++;
            }
            else
            {
                cout<<g<<endl;
                break;
            }
            if(g<y2)
            {
                cout<<g<<endl;
                g+=1;
                ans++;
            }
            else
            {
                cout<<g<<endl;
                break;
            }
            if(g<y2)
            {
                cout<<g<<endl;
                g+=5;
                ans++;
            }
            else
            {
                cout<<g<<endl;
                break;
            }

        }
        else
        {
            ans+=7*h;
            //g=g+28*h;
            //g=
            if(g<y2)
            {
                cout<<g<<endl;
                g+=5;
                ans++;
            }
            else
            {
                cout<<g<<endl;
                break;
            }
            if(g<y2)
            {
                cout<<g<<endl;
                g+=1;
                ans++;
            }
            else
            {
                cout<<g<<endl;
                break;
            }
            if(g<y2)
            {
                cout<<g<<endl;
                g+=5;
                ans++;
            }
            else
            {
                cout<<g<<endl;
                break;
            }
            if(g<y2)
            {
                cout<<g<<endl;
                g+=5;
                ans++;
            }
            else
            {
                cout<<g<<endl;
                break;
            }
            if(g<y2)
            {
                cout<<g<<endl;
                g+=1;
                ans++;
            }
            else
            {
                cout<<g<<endl;
                break;
            }
            if(g<y2)
            {
                cout<<g<<endl;
                g+=5;
                ans++;
            }
            else
            {
                cout<<g<<endl;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
