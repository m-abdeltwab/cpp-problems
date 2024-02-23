#include<iostream>
using namespace std;




int main() {


    double n, m;
    cin >> n >> m;

    double div = n / m;
    int int_div = n / m;

    double frac_part = div - int_div;
    double remainder = frac_part * m;


//    Other solution
//    int result = n - (n / m) * m;
    cout <<remainder;

    return 0;
}