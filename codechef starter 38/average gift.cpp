#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       ll n,x;
       cin>>n>>x;
       int a[n];
       for(int i=0;i<n;i++)
       {
       cin>>a[i];
       }
     sort(a,a+n);
     if(x<a[0]||x>a[n-1])
     cout<<"no"<<endl;
     else
     cout<<"yes"<<endl;  
    }
}