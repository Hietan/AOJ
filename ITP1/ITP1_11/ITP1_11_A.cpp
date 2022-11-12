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

vector<vector<int>> mat_mul(vector<vector<int>> a, vector<vector<int>> b){
    vector<vector<int>> c(3, vector<int>(3, 0));
    rep(i, 3){
        rep(j, 3){
            rep(k, 3){
                c.at(i).at(j) += a.at(i).at(k) * b.at(k).at(j);
            }
        }
    }
    return c;
}

int solve(vector<vector<int>> v){
    if(v.at(2).at(2) == 1)  return 0;
    if(v.at(1).at(2) == -1) return 1;
    if(v.at(0).at(2) == 1)  return 2;
    if(v.at(0).at(2) == -1) return 3;
    if(v.at(1).at(2) == 1)  return 4;
    if(v.at(2).at(2) == -1) return 5;
    return -1;
}

int main(void){

    vector<int> face(6);
    vec_in(face);

    string command;
    cin >> command;

    vector<vector<int>> v = {
        {1,0,0},
        {0,1,0},
        {0,0,1}
    };

    vector<vector<vector<int>>> arr = {
        {
            {0,0,-1},
            {0,1,0},
            {1,0,0}
        },
        {
            {0,0,1},
            {0,1,0},
            {-1,0,0}
        },
        {
            {1,0,0},
            {0,0,1},
            {0,-1,0}
        },
        {
            {1,0,0},
            {0,0,-1},
            {0,1,0}
        }
    };

    rep(i, command.size()){
        switch(command.at(i)){
            case 'E':
                v = mat_mul(v, arr.at(0));
                break;
            case 'W':
                v = mat_mul(v, arr.at(1));
                break;
            case 'S':
                v = mat_mul(v, arr.at(2));
                break;
            case 'N':
                v = mat_mul(v, arr.at(3));
                break;
        }
    }

    cout << face.at(solve(v)) << endl;

    return 0;
}
