//vetor input type 1

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a;
    int x;

    while (cin >> x) {
        a.push_back(x);
    }

    for(int x : a) cout << x << " ";

    return 0;
}
    */



#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    vector<int> d(n);
    for(auto &i : d){
        cin >> i;

    }
    for(auto i : d){
        cout << i<<  " " ;
    }
    
    return 0 ;
}