#include<bits/stdc++.h>
using namespace std;
int distinct(vector<int>a,int n)
{
    int x=accumulate(a.begin(),a.end(),0);
    int sum1=0;
    int count=0;
    int i=1;
    while(sum1<x)
    {
        sum1+=i;
        i++;
        count++;
    }
    if(sum1==x)
    return count;
    else 
    return count-1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       vector<int>a(n);
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       cout<<distinct(a,n)<<endl;
    }
}