#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       string s;
       cin>>s;
       ll ans=0;
       for(ll i=0;i<n/2;i++)
       {
           if(s[i]!=s[n-i-1])
           ans++;
       }
       cout<<(ans+1)/2<<endl;
    }
}