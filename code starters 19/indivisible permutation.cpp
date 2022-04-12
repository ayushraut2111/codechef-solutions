#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      if(n==2)
      cout<<2<<" "<<1<<endl;
      else{
      int a[n];
      for(int i=0;i<n;i++)
      a[i]=i+1;
      for(int i=1;i<n-1;i++)
      {
          swap(a[i],a[i+1]);
      }
      for(int i=0;i<n;i++)
      cout<<a[i]<<" ";
      cout<<endl;
  }
  
  }
}