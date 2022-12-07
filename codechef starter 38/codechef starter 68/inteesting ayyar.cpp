#include <bits/stdc++.h>
using namespace std;
void wiggleSort(vector<int>& nums) {
        int size = nums.size();
        nth_element(begin(nums), begin(nums) + size / 2, end(nums));
        int m = *(begin(nums) + size / 2);
        
        #define A(i) nums[(1 + 2*(i)) % (size | 1)]
        
        int l = 0, r = size - 1;
        for (int i = 0; i <= r;)
            if (A(i) > m) swap(A(i++), A(l++));
            else if (A(i) < m) swap(A(i), A(r--));
            else i++;
    }
int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
    a.push_back(x);    
    }
    wiggleSort(a);
    int point=0;
    for(int i=0;i<n-2;i++){
        if(a[i]<=a[i+1] && a[i+1]<=a[i+2])
        point=1;
        if(a[i]>=a[i+1] && a[i+1]>=a[i+2])
        point=1;
        
    }
    if(point==0){
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    }
    else{
        cout<<"-1";
    }
    cout<<"\n";
    
}
 return 0;
}