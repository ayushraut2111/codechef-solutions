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
      string s;
      cin>>s;
      int nb=0,nw=0;
      for(int i=0;i<n-1;i++)
      {
          if(s[i]=='b'&&s[i]!=s[i+1])
          {
              nb++;
          }
          if(s[i]=='w'&&s[i]!=s[i+1])
          nw++;
         
      }
       if(s[n-1]!=s[n-2])
          {
              if(s[n-1]=='b')
              nb++;
              else
              nw++;
          }
          else
          {
              if(s[n-1]=='b')
              nb++;
              else
              nw++;
          }
      cout<<min(nb,nw)<<endl;
   
  }
}