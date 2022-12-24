#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, x;
    while(t--)
    {
        cin >> n >> x;
        int total;
        total = n*x;
        if(total%4 == 0)
        {
            total = total/4;
        }
        else{
            total = total/4+1;
        }

        cout << total << endl;
    }

}