#include<iostream>
#include<vector>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)n; i++)

void vec_out(vector<int> v){
    rep(i, v.size()){
        cout << ' ' << v.at(i);
    }
    cout << endl;
}

int main(void){
    int n;
    cin >> n;

    vector<vector<vector<int>>> bu(4, vector<vector<int>>(3, vector<int>(10, 0)));

    rep(_, n){
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        bu.at(b-1).at(f-1).at(r-1) += v;
    }

    rep(b, 4){
        rep(f, 3) vec_out(bu.at(b).at(f));
        if(b >= 3) break;
        cout << "####################" << endl;
    }
    return 0;
}