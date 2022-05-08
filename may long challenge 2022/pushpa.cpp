#include<bits/stdc++.h>
#define ll long long
using namespace std;
int pushpa(int a[],int n)
{
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    int ans=INT_MIN;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        ans=max(ans,it->first+(it->second-1));
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
       cout<<pushpa(a,n)<<endl;
    }
}

