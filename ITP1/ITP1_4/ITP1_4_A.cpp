#include<iostream>
#include<iomanip>
using namespace std;

int main(void){
    int a, b;
    cin >> a >> b;

    cout << a / b << ' ' << a % b << ' ';
    cout << fixed << setprecision(5) << (double)a / b << endl;

    return 0;
}