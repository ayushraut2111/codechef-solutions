#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void flipsort(string s,int n,vector<pair<int,int>>&vec)
{
    // int index=n;
    // if(a[n-1]=='0')
    // {
    //     for(int i=n-1;i>=0;i--)
    //     {
    //         if(a[i]=='1')
    //         {
    //             index=i;
    //             break;
    //         }
    //     }
    // }
    // else
    // {
    //     for(int i=n-1;i>=0;i--)
    //     {
    //         if(a[i]=='0')
    //         {
    //             break;
    //         }
    //         else
    //         {
    //             index=i;
    //         }
    //     }
    // }
    // for(int i=0;i<index;i++)
    // {
    //     int count=0;
    //     if(a[i]=='1')
    //     {
    //         for(int j=i;j<index;j++)
    //         {
    //             if(a[j]=='1')
    //             {
    //                 a[j]='0';
    //                 count++;
    //             }
    //             else
    //             break;
    //         }
    //         v.push_back({i+1,count});
    //     }
    // }
    // if(a[n-1]=='0')
    // {
    //     for(int i=index;i<n;i++)
    //     {
    //         if(a[i]=='0'){
    //         int count=0;
    //         for(int j=i;j<n;j++)
    //         {
    //             if(a[j]=='0')
    //             {
    //                 a[j]=='1';
    //                 count++;
    //             }
    //             else
    //             break;
    //         }
    //         v.push_back({i+1,count});
    //     }
    //     }
    // }
    for(ll i=0; i<n; i++){
        int sz = vec.size();
        int x = sz%2 ? !(s[i] - '0') : s[i] - '0' ; 
        if(x == 1){
            vec.push_back({i+1, n-i});
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        vector<pair<int,int>>v;
        flipsort(a,n,v);
        for(auto x:v)
        {
            cout<<x.first<<" "<<x.second<<endl;
        }
    }
}