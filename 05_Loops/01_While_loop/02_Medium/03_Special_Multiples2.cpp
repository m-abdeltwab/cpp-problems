#include <iostream>
using namespace std;


int main() {
    int n, num;
    cin >> n;
    num = 0;

    while (n){
        if(num % 3 == 0 && num % 4 != 0){
            cout << num <<" ";
            n--;
        }
        num++;

    }

    return 0;
}