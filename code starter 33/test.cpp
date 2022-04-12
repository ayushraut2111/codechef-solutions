#include <bits/stdc++.h> 
using namespace std; 
 
int mex1(vector<int> &v) 
{ 
    unordered_map<int, int> mp; 
    for (auto &&i : v) { 
        mp[i]++; 
    } 
 
    for (int i = 1; i < *max_element(all(v)); i++) { 
        if (mp.count(i) == 0) 
            return i; 
    } 
 
    return 1; 
} 
 
int main() 
{ 
    int Tc = 1; 
    cin >> Tc; 
 
    while (Tc--) 
        {
            int n; 
    cin >> n; 
 
    vector<int> v(n); 
    unordered_map<int, int> mp; 
    for (auto &&i : v) { 
        cin >> i; 
        mp[i]++; 
    } 
    if (n == 1) { 
        cout << -1 << endl; 
        return; 
    } 
 
    int mex = mex1(v); 
 
    sort(all(v)); 
 
    int a = 0; 
    int cnt = 0; 
    for (int i = 0; i < n; i++) { 
        if (v[i] > mex) { 
            a = i; 
            break; 
        } 
    } 
 
    for (int i = a; i < n - 1; i++) { 
        if (v[i] + 1 == v[i + 1]) 
            cnt++; 
    } 
 
    cout << cnt + 1 / 2 << endl; 
        }
 
    return 0; 
}