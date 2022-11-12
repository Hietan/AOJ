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
    int n, m, l;
    cin >> n >> m >> l;

    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(m, vector<int>(l));

    vec2_in(a);
    vec2_in(b);

    vector<vector<long>> c(n, vector<long>(l));

    rep(i, n){
        rep(j, l){
            long sum = 0;
            rep(k, m) sum += a.at(i).at(k) * b.at(k).at(j);
            c.at(i).at(j) = sum;
        }
    }

    vec2_out(c);

    return 0;
}