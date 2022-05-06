#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mystery(ll a[],ll n,ll l,ll r,ll x)
{
    ll count=0;
    for(ll i=l-1;i<r;i++)
    {
        if((a[i]^x)>(a[i]&x))
        {
            count++;
        }
    }
    return count;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       ll a[n];
       for(ll i=0;i<n;i++)
       {
       cin>>a[i];
       }
       ll q;
       cin>>q;
       while(q--)
       {
           ll l,r,x;
           cin>>l>>r>>x;
           cout<<mystery(a,n,l,r,x)<<endl;
       }
    }
}