#include<iostream>
using namespace std;




int main() {
    double a, b;
    cin >> a >> b;

    int int_div = a / b;
    double div = a / b;

    double frac_part = div - int_div;

    cout << frac_part <<endl;

return 0;
}