#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll N;
    cin >> N;
    vector<ll> arr(N);

    unordered_map<ll, ll> m;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }
    ll ans = 0;
    for (auto i : m)
    {
        if (i.second > 1)
        {
            ll x = i.second;
            // This is the formula
            ans += x * (x - 1) / 2;
        }
    }

    cout << ans << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}