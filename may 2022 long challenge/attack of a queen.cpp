#include<bits/stdc++.h>
#define ll long long
using namespace std;
int queenattack(int n,int x,int y)
{
    int left,right,up,down,leftup,leftdown,rightup,rightdown;
    left=x-1;
    right=n-x;
    up=y-1;
    down=n-y;
    if(left<up)
    leftup=left;
    else
    leftup=up;
    if(right<up)
    rightup=right;
    else
    rightup=up;
    if(left<down)
    leftdown=left;
    else
    leftdown=down;
    if(right<down)
    rightdown=right;
    else
    rightdown=down;


    return left+right+up+down+leftup+leftdown+rightup+rightdown;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,x,y;
       cin>>n>>x>>y;
       cout<<queenattack(n,x,y)<<endl;

    }
}

// in this question we have to find the number of blocks which are under attack of queen

// to find the diagonals block first we have to find the left right up down block and then those left right up down diagonal are 
// dependent on those number of blocks, if we have to find the leftup diagonal then thosw will be the minum from left and right 
// number of blocks for every diagonal it is same