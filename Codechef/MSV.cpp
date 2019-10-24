#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define deb(x) cout<<#x<<" "<<x<<endl
int main()
{
    fastIO;
    ll t;
    cin>>t;
    while(t--)
    {
    ll n;
    cin>>n;
    ll a[n];
    vector<ll> v;
    unordered_map<ll,ll> mp;
    for(ll i=0;i<n;i++)
        {   cin>>a[i];

        }
        ll ans,c=0;
     for(ll i=1;i<n;i++)
     {
         for(ll j=1;j<=sqrt(a[i-1]);j++)
            {
                if(a[i-1]%j==0)
                {
                    if(a[i-1]/j==j)
                        mp[j]++;
                    else
                    {
                        mp[j]++;
                        mp[a[i-1]/j]++;
                    }
                }
            }
         ans=mp[a[i]];
         c=max(ans,c);
     }
     cout<<c<<endl;
     mp.clear();
    }
    return 0;
}
