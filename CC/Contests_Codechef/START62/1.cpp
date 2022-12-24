#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int max = 0;
        int min = 0;

        // finding max_element
        if (a > b && a > c)
        {
            max = a;
        }
        else if (b > a && b > c)
        {
            max = b;
        }
        else if (c > a && c > b)
        {
            max = c;
        }


        // finding min_element
        if (a < b && a < c)
        {
            min = a;
        }
        else if (b < a && b < c)
        {
            min = b;
        }
        else if (c < a && c < b)
        {
            min = c;
        }


        cout << max-min << endl;
    }
}