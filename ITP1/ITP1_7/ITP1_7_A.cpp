#include<iostream>
#include<vector>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)n; i++)

template<typename T>
void vec_in(vector<T> &v){
    rep(i, v.size()) cin >> v.at(i);
}

template<typename T>
void vec2_in(vector<vector<T>> &v){
    rep(i, v.size()) vec_in(v.at(i));
}

template<typename T>
void vec_out(vector<T> v){
    vec_out(v, ' ');
}

template<typename T>
void vec_out(vector<T> v, char c){
    rep(i, v.size()-1) cout << v.at(i) << c;
    cout << v.at(v.size()-1) << endl;
}

template<typename T>
void vec2_out(vector<vector<T>> v){
    vec2_out(v, ' ');
}

template<typename T>
void vec2_out(vector<vector<T>> v, char c){
    rep(i, v.size()) vec_out(v.at(i), c);
}

char solve(int m, int f, int r){
    if(m == -1 or f == -1) return 'F';
    int t = m + f;
    if(t >= 80) return 'A';
    if(t >= 65) return 'B';
    if(t >= 50) return 'C';
    if(t >= 30){
        if(r >= 50) return 'C';
        else return 'D';
    }
    return 'F';
}

int main(void){
    while(true){
        int m, f, r;
        cin >> m >> f >> r;

        if(m == -1 and f == -1 and r == -1) break;

        cout << solve(m, f, r) << endl;
    }

    return 0;
}