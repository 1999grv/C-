#include<bits/stdc++.h>
using namespace std;
int main()
{
 		#ifndef ONLINE_JUDGE
 		freopen("input.in","r",stdin);
 		freopen("output.in","w",stdout);
 		#endif
ll nb, nl, d;
    cin >> nb >> nl >> d;
    vector<ll> bookcost(nb);
    vector<pll> sortbook;
    for(ll i = 0; i < nb; ++i)
    {
        cin >> bookcost[i];
        sortbook.pb({bookcost[i],i});
    }
    sort(all(sortbook));
    reverse(all(sortbook));
    lib code[nl];
    vector<pll> libval;
    for(ll i = 0; i < nl; ++i)
    {
        cin >> code[i].numbook >> code[i].signupdays >> code[i].perday;
        code[i].id = i;
        for(ll j = 0; j < code[i].numbook; ++j)
        {
            ll k;
            cin >> k;
            code[i].books.insert({bookcost[k],k});
        }
        ll val = 0;
        for(auto x : code[i].books)
            val += bookcost[x.sec];
        libval.pb({val / code[i].perday,i});
    }
    sort(all(libval));
    reverse(all(libval));
    cout << nl << endl;
    map<ll,ll> 
    for(auto x : libval)
    {
        cout << x.sec << " ";
        ll h = d - code[x.sec].signupdays;
        ll send = max(code[x.sec].numbook, (h * code[x.sec].perday));
        cout << send << endl;
        for(auto x : code[x.sec].books)
        {
            if(send > 0)
                cout << x << " ";
            send--;
        }
    }
    
}

}