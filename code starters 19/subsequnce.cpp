#include<bits/stdc++.h>
using namespace std;
// void subArray(int arr[], int n,vector<vector<int>>&sub)
// {
    
//     for (int i=0; i <n; i++)
//     {
        
//         for (int j=i; j<n; j++)
//         {
//             vector<int>x;
//             for (int k=i; k<=j; k++)
//                 x.push_back(arr[k]);
 
//             sub.push_back(x);
//         }
//     }
// }
void printSubsequences(vector<int> arr, int index,
                       vector<int> subarr,vector<vector<int>>&sub)
{
    if (index == arr.size())
    {
        int l = subarr.size();
 
        if (l != 0)
            {
                sub.push_back(subarr);
            }
    }
    else
    {
        printSubsequences(arr, index + 1, subarr,sub);
 
        subarr.push_back(arr[index]);
 
        
        printSubsequences(arr, index + 1, subarr,sub);
    }
    return;
}

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      vector<int> arr(n);
      for(int i=0;i<n;i++)
      cin>>arr[i];
      vector<vector<int>>sub;
      vector<int>subarr;
      printSubsequences(arr,0,subarr,sub);
      long long int count=0;
      for(auto x: sub)
      {
          set<int>s;
          for(auto y: x)
          {
              s.insert(y);
          }
          if(s.size()==x.size())
          count++;
      }
      cout<<count%(1000000007)<<endl;
    
  }
}