#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()     //🤣😂😊❤️😍😒🙌😁💕
{
    int t;
    cin>>t;
    while(t--)
    {
       float x,y;
       cin>>x>>y;
       float c=(y-x)/8;
       if(c==int((y-x)/8))
       {
           cout<<int(y-x)/8<<endl;
       }
       else
       {
           cout<<int(y-x)/8+1<<endl;
       }
    }
}