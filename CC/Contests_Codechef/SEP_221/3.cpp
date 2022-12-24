#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    float A,B,X,Y;
    while(T--)
    {
        cin >> A >> B >> X >> Y;
        if(A/X < B/Y)
        {
            cout << "Bob" << endl;
        }
        else if(A/X > B/Y)
        {
            cout << "Alice" << endl;
        }
        else{
            cout << "Equal" << endl;
        }
    }
}