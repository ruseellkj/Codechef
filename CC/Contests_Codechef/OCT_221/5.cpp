#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    string s;
    while (t--)
    {
        cin >> n;
        cin >> s;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            count++;
            if (s[i+1] == '1')
            {
                break;
            }
            // cout << count << endl;s
        }
        cout << count << endl;
    }

}