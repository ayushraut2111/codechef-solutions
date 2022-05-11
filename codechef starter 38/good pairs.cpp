#include<bits/stdc++.h>
#define ll long long
using namespace std;
int goodpairs(int a[],int b[],int n)
{
    map<pair<int,int>,int>mp;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=mp[{a[i],b[i]}];
        mp[{b[i],a[i]}]++;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       {
       cin>>a[i];
       }
       int b[n];
       for(int i=0;i<n;i++)
       cin>>b[i];
       cout<<goodpairs(a,b,n)<<endl;

    }
}