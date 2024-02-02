#include<iostream>
using namespace std;




int main() {
    int num;
    cin >> num;
//    bool result = num % 2 == 0;
    bool result = num / 2 == 0;

    int last_digit = num % 10;
    bool result2 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;


return 0;
}