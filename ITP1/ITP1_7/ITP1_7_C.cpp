#include<iostream>
#include<vector>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define rep1(i, n) for(int i = 1; i <= (int)n; i++)
#define rep_se(i, s, e) for(int i = s; i <= (int)e; i++)

template<typename T>
void vec_in(vector<T> &v){
    rep(i, v.size()) cin >> v.at(i);
}

template<typename T>
void vec2_in(vector<vector<T>> &v){
    rep(i, v.size()) vec_in(v.at(i));
}

template<typename T>
void vec_out(vector<T> v, char c){
    rep(i, v.size()-1) cout << v.at(i) << c;
    cout << v.at(v.size()-1) << endl;
}

template<typename T>
void vec_out(vector<T> v){
    vec_out(v, ' ');
}

template<typename T>
void vec2_out(vector<vector<T>> v, char c){
    rep(i, v.size()) vec_out(v.at(i), c);
}

template<typename T>
void vec2_out(vector<vector<T>> v){
    vec2_out(v, ' ');
}

int main(void){
    int r, c;
    cin >> r >> c;

    vector<vector<int>> t(r, vector<int>(c));

    vec2_in(t);

    rep(i, r){
        int sum = 0;
        rep(j, c) sum += t.at(i).at(j);
        t.at(i).push_back(sum);
    }

    vector<int> s;
    rep(i, c+1){
        int sum = 0;
        rep(j, r) sum += t.at(j).at(i);
        s.push_back(sum);
    }
    t.push_back(s);

    vec2_out(t);

    return 0;
}