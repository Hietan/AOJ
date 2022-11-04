#include<iostream>
using namespace std;

#define rep(i, n) for(int i = 0; i < (int)n; i++)

int main(void){
    int H, W;

    while(true){
        cin >> H >> W;
        if(H == 0 and W == 0) break;
        rep(i, H){
            rep(j, W){
                if((i + j) % 2) putchar('.');
                else putchar('#');
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}