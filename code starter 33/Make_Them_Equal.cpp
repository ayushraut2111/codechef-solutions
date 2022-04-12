#include<bits/stdc++.h>
using namespace std;
int makeequal(int a[],int n)
{
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        odd++;
    }
    int ans=0;
    if(even>odd||even==odd)
    {
        if(odd%2==0)
        {
            ans=odd/2;
        }
        else 
        ans=(odd/2)+1;
    }
    else if(odd>even)
    {
        ans=even;
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
       cout<<makeequal(a,n)<<endl;
    }
}