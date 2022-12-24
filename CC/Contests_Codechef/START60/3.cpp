#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int n,k;
    while(t--){
        cin >> n >> k;
        int ans = (n/k)*(n/k);
        cout << ans << endl;
    }
    return 0;
}