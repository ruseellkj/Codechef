#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    float x,y;
    while(t--){
        cin >> x >> y;
        if(y > x/2 || y ==  x/2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}