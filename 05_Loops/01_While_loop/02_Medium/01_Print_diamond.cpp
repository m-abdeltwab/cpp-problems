#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    while (n){
        int start = 10, end = 10;
        while (start <= end){
            cout << "*";
            start--;
        }
        cout <<endl;

        n--;
    }


    return 0;
}