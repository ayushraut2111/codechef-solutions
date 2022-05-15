#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll floorMod(ll a, ll n)
{
    ll q = (ll)floor((double)a / n);
    return a - n * q;
}
ll maxpair(ll b[],ll n, ll m)
{
    return max(b[0]*2,max(b[0]+b[1]+floorMod(b[0]-b[1],m),b[0]+b[1]+floorMod(b[1]-b[0],m)));     
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll n,m;
       cin>>n>>m;
       ll a[n];
       set<ll>s;
       for(ll i=0;i<n;i++)
       {
       cin>>a[i];
       s.insert(a[i]);
       }
       ll b[s.size()];
       ll i=0;
       for(auto it=s.rbegin();it!=s.rend();it++)
       {
           b[i]=*it;
           i++;
       }
       n=s.size();
       cout<<maxpair(b,n,m)<<endl;
}
}