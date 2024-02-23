#include<iostream>
using namespace std;




int main() {

    int num ;
    cin >> num ;

    int digit1 = num % 10;
    num /= 10;
    int digit2 = num % 10;
    num /= 10;
    int digit3 = num % 10;
    num /= 10;
    int digit4 = num % 10;
    num /= 10;

    cout << digit1 + digit2 + digit3 + digit4;



return 0;
}