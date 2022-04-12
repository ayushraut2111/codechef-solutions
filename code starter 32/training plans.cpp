#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, pair<bool, int>> p1, pair<int, pair<bool, int>> p2)
{
    return p1.second.second < p2.second.second;
}
float training(vector<pair<int, pair<bool, int>>> v, int b[], int n)
{
    sort(v.begin(), v.end(), cmp);
    if (v[0].second.second != 0)
        return 0;
    int temp = 0;
    float ans = 0;
    for (int i = 0; i < n; i++)
    {
        int maxi = 0;
        int index = 0;
        if (v[i].second.second <= temp && v[i].second.second != -1)
        {
            int j = 0;
            while (v[j].second.second <= temp)
            {
                if (v[j].second.first == false)
                {
                    if (v[j].first > maxi)
                    {
                        maxi = v[j].first;
                        index = j;
                    }
                }
                j++;
            }
            v[index].second.first = true;
            for (int k = 0; k < n; k++)
            {
                if (v[k].second.second == v[index].second.second)
                {
                    v[k].second.second = -1;
                }
            }
            ans += maxi;
            temp += 1;
        }
    }
    if (ans <= 0)
        return 0;
    else
        return ans / temp;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        vector<pair<int, pair<bool, int>>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            v.push_back({a[i], {false, b[i]}});
        }
        cout << fixed << setprecision(6) << training(v, b, n);
    }
}