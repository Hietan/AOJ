#include<iostream>
using namespace std;

#define rep1(i, n) for(int i = 1; i <= (int)n; i++)

void call(int n){
  rep1(i, n){
      int x = i;
      if ( x % 3 == 0 ){
          cout << " " << i;
          continue;
      }
      while( x ){
          if ( x % 10 == 3){
              cout << " " << i;
              break;
          }
          x /= 10;
      }
  }
}

int main(void){
    int n;
    cin >> n;

    call(n);

    return 0;
}