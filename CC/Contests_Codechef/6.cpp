// Pokemon Problem | PBATTLE | SEP221 CONTEST
#include <bits/stdc++.h>
#define ll long long
using namespace std;


// Method 1 : by using maps in c++ stl
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        map<ll, ll> m;
        for (int i = 0; i < n; i++)
        {
            m[a[i]] = b[i];
        }
        int max = INT_MIN;
        ll count = 0;
        for (auto it = m.rbegin(); it != m.rend(); it++)
        {
            if (it->second > max)
            {
                max = it->second;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}





// Alternate solution for the pokemon problem
// Method 2: By using vetcors in c++ stl
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         ll count = 0;
//         int max = INT_MIN;
//         vector<pair<int, int>> v;
//         ll arr1[n], arr2[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr1[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr2[i];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             v.push_back(make_pair(arr1[i], arr2[i]));
//         }

//         sort(v.begin(), v.end());

//         for (int i = n - 1; i >= 0; i++)
//         {
//             if (v[i].second > max)
//             {
//                 count++;
//                 max = v[i].second;
//             }
//         }

//         cout << count << endl;
//     }
// }