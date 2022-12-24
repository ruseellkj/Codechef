#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int W,X,Y,Z;
    while(T--)
    {
        cin >> W >> X >> Y >> Z;
        cout << W+((X-Y)*Z) << endl;
    }
}