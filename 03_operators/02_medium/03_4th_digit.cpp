#include<iostream>
using namespace std;




int main() {
    int num ;
    cin >>num;

    int forth_digit = (num / 1000) % 10;

    cout << forth_digit;




return 0;
}