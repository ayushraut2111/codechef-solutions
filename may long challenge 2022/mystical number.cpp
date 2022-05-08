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
       ll a[n];
       for(ll i=0;i<n;i++)
       {
       cin>>a[i];
       }
       ll dp1[n+1][33];
       for(ll i=1;i<=n;i++)
       {
           ll temp=a[i-1];
           for(ll j=0;j<33;j++)
           {
               dp1[i][j]=dp1[i-1][j];
           }
           ll pwr=32;
           if(temp!=0)
           {
               pwr=(int)(log(temp)/log(2));
           }
           dp1[i][pwr]++;
       }
       ll q;
       cin>>q;
       while(q--)
       {
           ll l,r,x1;
           cin>>l>>r>>x1;
           int scnt=0;
           int pwr=32;
           if(x1!=0)
           {
               pwr=(int)(log(x1)/log(2));
           }
               scnt=dp1[r][pwr]-dp1[l-1][pwr];
               int ans=(r-l+1)-scnt;
               cout<<ans<<endl;
           
       }
    }
}







// NAIVE SOLUTION OF THIS PROBLEM

// #include<bits/stdc++.h>
// #define ll unsigned long long int 
// using namespace std;
// ll mystery(ll a[],ll n,ll l,ll r,ll x1)
// {
//     ll count=0;
//     for(ll i=l-1;i<r;i++)
//     {
//         if((a[i]^x1)>(a[i]&x1))
//         {
//             count++;
//         }
//     }
//     return count;
// }
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--)
//     {
//        ll n;
//        cin>>n;
//        ll a[n];
//        for(ll i=0;i<n;i++)
//        {
//        cin>>a[i];
//        }
//        ll q;
//        cin>>q;
//        while(q--)
//        {
//            ll l,r,x1;
//            cin>>l>>r>>x1;
//            cout<<mystery(a,n,l,r,x1)<<endl;
//        }
//     }
// }