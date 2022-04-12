#include<bits/stdc++.h>
using namespace std;
int main()
{
  list<int>l1,l2;
  l1.push_back(1);
  l1.push_back(2);
  l1.push_back(3);
  l1.push_back(4);
  l2=l1;
  l1.remove(2);
  for(auto it=l1.begin();it!=l1.end();it++)
  {
      cout<<*it<<endl;
  }
  l1.remove(1);
  for(auto it=l1.begin();it!=l1.end();it++)
  {
      cout<<*it<<endl;
  }
  for(auto it=l2.begin();it!=l2.end();it++)
  {
      cout<<*it<<endl;
  }
}