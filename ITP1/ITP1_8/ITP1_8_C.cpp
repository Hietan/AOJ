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

char solve(char c){
    if(isupper(c)) return tolower(c);
    if(islower(c)) return toupper(c);
    else return c;
}

int main(void){
    string s;
    vector<int> res(26, 0);

    while(getline(cin, s)){
        rep(i, s.size()){
            char c = tolower(s.at(i));
            if(isalpha(c)) res.at(c - 'a')++;
        }
    }

    rep(i, res.size()){
        cout << char(i + 'a') << " : " << res.at(i) << endl;
    }

    return 0;
}