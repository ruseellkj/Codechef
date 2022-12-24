#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    float a,b,x,y;
    while(t--){
        cin >> a >> b >> x >> y;
        if(a/x > b/y){
            cout << "Chefina" << endl;
        }
        else if(a/x < b/y){
            cout << "Chef" << endl;
        }
        else{
            cout << "Both" << endl;
        }
    }
}