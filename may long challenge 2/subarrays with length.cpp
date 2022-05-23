#include<bits/stdc++.h>
#define ll long long
using namespace std;
// int slength(vector<int>v,int n)
// {
//     int count=0;
    
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j<n;j++)
//         {
//             if(find(v.begin()+i,v.begin()+j+1,j-i+1)!=v.begin()+j+1)
//             count++;
//         }
//     }
//     return count;
// }
// int slength(vector<int>v,int n)
// {
//     int count=0;
//     for(int i=0;i<n;i++)
//     {
//         unordered_set<int>s;
//         for(int j=i;j<n;j++)
//         {
//         s.insert(v[j]);
//             if(find(s.begin(),s.end(),j-i+1)!=s.end())
//             count++;
//         }
//     }
//     return count;
// }
// int slength(vector<int>v,int n)
// {
//     int ans=0;
//     map<int,int>mp;
//     for(int i=0;i<n;i++)
//     {
//         int l=v[i];
//         int s=0;
//         if(i-l+1>=0)
//         {
//             s=i-l+1;
//         }
//         else
//         s=0;
//         if(mp.find(v[i])!=mp.end()&&mp[v[i]]>=s)
//         s=mp[v[i]]+1;
//         int e=(s+l-1>=n)?n-1:s+l-1;
//         if(e-s+1!=l||s>e)
//         continue;
//         ans+=min(i-s+1,n-e);
//         mp[v[i]]=i;
//     }
//     return ans;
// }
int slength(vector<int>v,int n)
{
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       vector<int>v(n);
       for(auto&x:v)cin>>x;
       cout<<slength(v,n)<<endl;
    }
}