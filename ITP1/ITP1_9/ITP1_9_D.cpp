#include<iostream>
#include<algorithm>
#include<vector>
#include<cctype>
#include<string>
#include<cstring>
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
int main(void){
    string s;
    cin >> s;

    int q;
    cin >> q;

    rep(_, q){
        string op;
        int a, b;
        cin >> op >> a >> b;

        if(op == "print"){
            cout << s.substr(a, b-a+1) << endl;
        }
        if(op == "reverse"){
            reverse(s.begin() + a, s.begin()+b+1);
        }
        if(op == "replace"){
            string str;
            cin >> str;
            rep(i, str.size()){
                s.at(i+a) = str.at(i);
            }
        }
    }
}
*/

// after
int main(void){
    string s;
    cin >> s;

    int q;
    cin >> q;

    rep(_, q){
        string op;
        int a, b;
        cin >> op >> a >> b;

        if(op == "print"){
            cout << s.substr(a, b-a+1) << endl;
        }
        if(op == "reverse"){
            reverse(s.begin() + a, s.begin()+b+1);
        }
        if(op == "replace"){
            string str;
            cin >> str;
            s.replace(a, b-a+1, str);
        }
    }
    return 0;
}