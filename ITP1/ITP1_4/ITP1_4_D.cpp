#include<iostream>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)n; i++)

int main(void){
    int n;
    cin >> n;

    int a;
    int min = 1000000;
    int max = -1000000;
    long sum = 0;

    rep(i, n){
        cin >> a;
        if(a < min) min = a;
        if(a > max) max = a;
        sum += a;
    }

    cout << min << ' ' << max << ' ' << sum << endl;

    return 0;
}