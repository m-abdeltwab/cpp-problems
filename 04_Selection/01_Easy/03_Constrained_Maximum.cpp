#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3, max;
    cin >> num1 >> num2 >> num3;
    max = -1;

    if (num1 < 100){
        max = num1;
    }
    if (num2 > max && num2 < 100){
        max = num2;
    }
    if(num3 > max && num3 < 100){
        max = num3;
    }
    cout << max;
    return 0;
}