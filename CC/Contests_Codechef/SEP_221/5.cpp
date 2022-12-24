#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        long long arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + N);
        long long max_ele = LONG_MIN;
        long long min_ele = LONG_MAX;
        max_ele = max(arr[0] * arr[0], arr[N - 1] * arr[N - 1]);
        if (arr[0] < 0 && arr[N - 1] > 0)
        {
            min_ele = arr[0] * arr[N - 1];
        }
        else
        {
            for (int i = 0; i < N; i++)
            {
                min_ele = min(min_ele, arr[i] * arr[i]);
            }
        }

        cout << min_ele << " " << max_ele << endl;
    }
}


