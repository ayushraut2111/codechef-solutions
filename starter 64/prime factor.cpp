#include <bits/stdc++.h>
using namespace std;

bool isDivisible(long long int x, long long int y)
{
    if (y == 1)
        return true;
 
    long long int z = __gcd(x, y);
 
    if (z == 1)
        return false;
 
    return isDivisible(x, y / z);
}

int main() {
    int t;
  cin >> t;
  
  while(t--) {
      long long int a, b;
      cin >> a >> b;
      
      if (isDivisible(a, b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
  }
  
  return 0;
}