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

template<typename T>
T vec_sum(vector<T> v){
    T sum = 0;
    rep(i, v.size()) sum += v.at(i);
    return sum;
}

template<typename T>
double vec_mean(vector<T> v){
    return (double)vec_sum(v) / v.size();
}

void yon(bool b){
    if(b) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main(void){
    int n;
    cin >> n;

    vector<int> x(n), y(n);
    vec_in(x);
    vec_in(y);

    vector<int> d(n);
    rep(i, n) d.at(i) = abs(x.at(i) - y.at(i));

    double d1 = 0;
    rep(i, n) d1 += d.at(i);
    cout << fixed;
    cout << d1 << endl;

    double d2 = 0;
    rep(i, n) d2 += pow(d.at(i), 2);
    cout << sqrt(d2) << endl;

    double d3 = 0;
    rep(i, n) d3 += pow(d.at(i), 3);
    cout << cbrt(d3) << endl;

    double di = 0;
    rep(i, n) di = (di > d.at(i)) ? di : d.at(i);
    cout << di << endl;

    return 0;
}