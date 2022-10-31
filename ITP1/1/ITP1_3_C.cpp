#include<iostream>
#include<utility>
using namespace std;

int main(void){
    while(true){
        int a, b;
        cin >> a >> b;
        if(a == 0 and b == 0) break;
        if(a > b) swap(a, b);
        cout << a << ' ' << b << endl;
    }

    return 0;
}