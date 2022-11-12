#include<iostream>
#include<algorithm>
#include<vector>
#include<cctype>
#include<string>
#include<cstring>
#include<cmath>
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

void yon(bool b){
    if(b) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main(void){
    int a, b, c;
    cin >> a >> b >> c;

    double deg = c * M_PI / 180;

    cout << fixed;
    cout << a * b * sin(deg) / 2 << endl;
    cout << a + b + sqrt(pow(a,2) + pow(b,2) - 2*a*b*cos(deg)) << endl;
    cout << b * sin(deg) << endl;

    return 0;
}