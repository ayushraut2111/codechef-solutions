#include<bits/stdc++.h>
using namespace std;
int min(int a[],int n)
{
    int ans=INT_MAX;
    for(int i=0;i<=n-3;i++)
    {
        vector<int>v;
        v.push_back(a[i]);
        v.push_back(a[i+1]);
        v.push_back(a[i+2]);
        sort(v.begin(),v.end());
        if(((v[2]-v[0])*v[1])<ans)
        ans=(v[2]-v[0])*v[1];
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
    cout<<min(a,n)<<endl;
        
    }
}