#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll countSetBits(ll n)
{
    ll count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
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
       for(ll i=0;i<n;i++)
       {
       cin>>a[i];
       }
     ll temp=0;
     for(int i=0;i<n;i++)
     {
         temp=temp|a[i];
     }
     cout<<countSetBits(temp)<<endl;
    }

}