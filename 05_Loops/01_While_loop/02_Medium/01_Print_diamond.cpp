#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;

    int row = n;
    while (row > 0){
        int column = 2 * n;
        while (column >= 2 * row){
            cout <<"*";
            column--;
        }
        cout <<endl;
        row--;
    }

    while (row > 0){
        int column = 2 * n;
        while (column >= 2 * row){
            cout <<"*";
            column--;rr
        }
        cout <<endl;
        row--;
    }





    return 0;
}