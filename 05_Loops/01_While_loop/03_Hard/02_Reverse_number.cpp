#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    int number = 0;

    while (n > 0){
        int last_digit = n % 10;
        n /= 10;

        number = number * 10 + last_digit;


    }
    cout << number << " "<< number * 3;

    return 0;
}