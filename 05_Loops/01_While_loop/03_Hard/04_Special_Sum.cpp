#include <iostream>
#include <cmath>
using namespace std;


int main() {

    int cases, n, digit;
    cin >> cases;

    while (cases){
        cin >> n;

        int start = 1;
        int result = 0;
        while (start <= n){
            cin >> digit;
            result+= pow(digit, start);
            start++;
        }
        cout <<result<<endl;
        cases--;
    }
    return 0;
}


