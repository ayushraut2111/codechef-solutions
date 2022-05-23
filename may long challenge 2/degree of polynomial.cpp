#include<bits/stdc++.h>
#define ll long long
using namespace std;
int degree(int a[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]!=0)
        {
            return i;
        }
    }
    return 0;
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
       cout<<degree(a,n)<<endl;
    }
}