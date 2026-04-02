#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    float r;

    cin >> r;
    cout << r << endl;

    cin.ignore();        // 🔥 fix
    getline(cin, s);     

    cin >> n;

    for(int i = 0; i < n; i++){
        cout << s << endl;
    }

    return 0;
}