#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(void){
    double r;
    cin >> r;

    cout << fixed << pow(r, 2) * M_PI << ' ' << r * 2 * M_PI << endl;

    return 0;
}