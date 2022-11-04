#include<iostream>
using namespace std;

int main(void){
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;

    if((x >= r and y >= r) and (x <= W - r and y <= H - r)){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }

    return 0;
}