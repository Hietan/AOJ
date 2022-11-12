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
    while(true){
        int n;
        cin >> n;

        if(n == 0) break;

        vector<int> s(n);
        vec_in(s);

        double m = vec_mean(s);

        double alpha2 = 0;
        rep(i, n) alpha2 += pow(s.at(i) - m, 2);
        alpha2 /= n;

        cout << fixed << sqrt(alpha2) << endl;
    }
}