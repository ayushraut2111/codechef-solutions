#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll  M= 1e9+7;
ll closest(string s,ll n)
{
    ll count=1;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='c'||s[i]=='g'||s[i]=='l'||s[i]=='r')
        count=(count*2)%M;
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
       string s;
       cin>>s;
       cout<<closest(s,n)<<endl;
    }
}