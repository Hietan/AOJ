#include<iostream>
using namespace std;

int main(void){
    int a, b;
    char op;

    while(true){
        int res;
        cin >> a >> op >> b;
        if(op == '?') break;
        switch(op){
            case '+':
                res = a + b;
                break;
            case '-':
                res = a - b;
                break;
            case '*':
                res = a * b;
                break;
            case '/':
                res = a / b;
                break;
        }
        cout << res << endl;
    }

    return 0;
}