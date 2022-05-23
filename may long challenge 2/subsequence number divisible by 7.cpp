#include<bits/stdc++.h>
#define ll long long
#define integer int
const integer M=1e9+7;
using namespace std;
int sub7(vector<integer>v,integer n)
{
    vector<vector<integer>>Ayush(n+1,vector<integer>(7));
    Ayush[0][0]=1;
    for(integer i=0;i<n;i++)
    {
        integer j=(integer)to_string(v[i]).size();
        integer papa=1;
        while(j!=0)
        {
            papa=papa*10;
            j--;
        }
        for(integer k=0;k<7;k++)
        {
            integer y=(k*papa+v[i])%7;
            Ayush[i+1][k]=(Ayush[i+1][k]+Ayush[i][k])%M;
            Ayush[i+1][y]=(Ayush[i+1][y]+Ayush[i][k])%M;
        }
    }
    // cout<<(Ayush[n][0]-1+M)%M<<endl;
    return (Ayush[n][0]-1+M)%M;
    // return 0;
}
integer main()
{
    integer t;
    cin>>t;
    while(t--)
    {
       integer n;
       cin>>n;
       vector<integer>v(n);
       for(integer&x:v)cin>>x;
       cout<<sub7(v,n)<<endl;
    }
}



