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



    //type two normal
    /*
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
*/






#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector < int > c(n);
    for(auto &x : c) {
        cin >> x ;
    }
    for(auto x : c){
        cout << c << " ";
    }
    return 0;
}