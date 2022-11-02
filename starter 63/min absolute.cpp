#include<bits/stdc++.h>
        using namespace std;
        int main()

        {
            int t;
            cin >> t;
            for (int k = 0; k < t; k++) {
                int n;
                cin>>n;
                string s1,s2;
                cin>>s1>>s2;
                int ans = 0;
                for (int i = 0; i < n; i++) {
                    if (s1[i] > s2[i]) {
                        int j = 26 - (s1[i] - s2[i]);
//
                        ans += j;


                    } else {

                        int d = s2[i] - s1[i];

                        ans += d;

                    }
                }
                cout << min(abs(ans % 26 - 26), ans % 26)<<endl;
            }
        }