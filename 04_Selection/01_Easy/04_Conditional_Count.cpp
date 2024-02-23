#include <iostream>
using namespace std;

int main(){
    int x, num1, num2, num3, num4, num5;
    cin >> x >> num1>> num2>> num3>> num4>> num5;
    int small_qual = 0;

    small_qual += (num1 <= x);
    small_qual += (num2 <= x);
    small_qual += (num3 <= x);
    small_qual += (num4 <= x);
    small_qual += (num5 <= x);


    cout << small_qual <<" " <<5 - small_qual;


    return 0;
}