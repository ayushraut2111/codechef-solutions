#include<bits/stdc++.h>
using namespace std;
int findshoes(int n,int m)
{
    if(m<n)
    {
        return (2*n)-m;
    }
    else
    return n;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        cout<<findshoes(n,m)<<endl;
    }
}