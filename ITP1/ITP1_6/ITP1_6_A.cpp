#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)n; i++)

int main(void){
    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, n) cin >> a.at(i);

    reverse(a.begin(), a.end());
    
    rep(i, n){
        cout << a.at(i);
        if(i < n - 1) cout << ' ';
    }
    cout << endl;

    return 0;
}