#include <iostream>
using namespace std;


int main() {
    int n, num;
    cin >> n;
    num = 0;
    while (num <= n){
        if(num % 8 == 0 || (num % 3 == 0 && num % 4 == 0)){
            cout << num <<" ";
        }
        num+=4;
    }

    return 0;
}