#include <bits/stdc++.h>
using namespace std;

// void ans()
// {
//     int n;
//     string s;
//     cin >> n;
//     cin >> s;
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == '1')
//         {
//             count++;
//         }
//         else
//         {
//             break;
//         }
//     }
//     cout << count << endl;
// }
int main()
{
    int t;
    cin >> t;
    int n;
    string s;
    while (t--)
    {
        // int n;
        // string s;
        cin >> n;
        cin >> s;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }
}