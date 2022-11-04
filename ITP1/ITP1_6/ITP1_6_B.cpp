#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define rep1(i, n) for(int i = 1; i <= (int)n; i++)

void print_missing_card(char s, vector<bool> v){
    rep(i, v.size()) if(!v.at(i)) cout << s << ' ' << (i+1) << endl;
}

int main(void){
    int n;
    cin >> n;

    vector<bool> s(13, false), h(13, false), c(13, false), d(13, false);

    char su;
    int r;
    rep(_, n){
        cin >> su >> r;
        switch(su){
            case 'S':
                s.at(r-1) = true;
                break;
            case 'H':
                h.at(r-1) = true;
                break;
            case 'C':
                c.at(r-1) = true;
                break;
            case 'D':
                d.at(r-1) = true;
                break;
        }
    }

    print_missing_card('S', s);
    print_missing_card('H', h);
    print_missing_card('C', c);
    print_missing_card('D', d);

    return 0;
}