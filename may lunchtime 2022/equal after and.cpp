#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll equalafter(list<ll>l)
{
    if(*max_element(l.begin(),l.end())==*min_element(l.begin(),l.end()))
    return 0;
    set<ll>s;
    for(auto it=l.begin();it!=l.end();it++)
    {
        s.insert(*it);
    }
    list<ll>l2;
    for(auto it=s.begin();it!=s.end();it++)
    {
        l2.push_back(*it);
    }
    l=l2;
    ll count=0;
    l.sort();
    l.reverse();
    while(l.size()>1)
    {
    if(*max_element(l.begin(),l.end())==*min_element(l.begin(),l.end()))
    return count;
        auto it=l.end();
        it--;
        auto it1=l.end();
        it1--;it1--;
        l.pop_back();
        l.pop_back();
        ll x=*it& *it1;
        l.push_back(x);
        count++;
        if(*max_element(l.begin(),l.end())==*min_element(l.begin(),l.end()))
        {
            return count;
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
       list<ll>l;
       for(ll i=0;i<n;i++)
       {
       cin>>a[i];
       l.push_back(a[i]);
       }
       cout<<equalafter(l)<<endl;
    }
}