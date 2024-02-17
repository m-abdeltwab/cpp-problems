#include <iostream>
using namespace std;


int main() {
   int t;
   cin >> t;
    while (t){
        int n, num, min;
        cin >> n;
        min = 999999999;
        while (n){
            cin >> num;
            if (num < min) min = num;
            n--;
        }
        cout << min <<endl;


        t--;
    }
    return 0;
}