#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        int count =0;
        for(int i=0; i<t; i++){
            if(s[i] == 'a' || s[i] == 'b'){
                count++;
            }
            else{
                break;
            }
        }
        cout << count << endl;
    }
}