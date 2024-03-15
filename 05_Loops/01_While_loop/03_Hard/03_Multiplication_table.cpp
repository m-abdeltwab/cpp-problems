#include <iostream>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;

    int start_n = 1;
    while (start_n <= n){
        int start_m = 1;

        while (start_m <= m){
            cout << start_n << " X " << start_m <<" = " <<start_n * start_m <<endl;
            start_m++;
        }
        start_n++;
    }
    return 0;
}