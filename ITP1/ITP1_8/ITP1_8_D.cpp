#include<iostream>
#include<vector>
#include<cctype>
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

/* before
bool solve(string s, string p){
    rep(i, s.size()){
        bool match = true;
        rep(j, p.size()){
            if(s.at((i+j)%s.size()) == p.at(j)) continue;
            match = false;
            break;
        }
        if(match) return true;
    }
    return false;
}

int main(void){
    string s, p;
    cin >> s >> p;

    if(solve(s, p)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
*/

// after
bool solve(string s, string p){
    s += s;
    rep(i, s.size()/2){
        if(s.substr(i, p.size()) == p){
            return true;
        }
    }
    return false;
}

int main(void){
    string s, p;
    cin >> s >> p;

    yon(solve(s, p));

    return 0;
}