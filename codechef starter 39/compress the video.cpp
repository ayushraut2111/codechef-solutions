#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll compress(ll a[],ll n)
{
    stack<ll>s;
    for(ll i=0;i<n;i++)
    {
        if(s.empty()||a[i]!=s.top())
        {
            s.push(a[i]);
        }
        else
        continue;
    }
    return s.size();
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
       cout<<compress(a,n)<<endl;
    }
}