#include <iostream>
using namespace std;

// power(2, 0) => 1
// power(2, 1) => 2
// power(2, 2) => power(2, 1) * 2
// power(2, 3) => power(2, 2) * 2
// power(n, m) => power(n, m-1) * n


int my_power(int base, int power){
    if(power == 0){
        return 1;
    }
    return base * my_power(base, power -1);
}



int main(){
    int  base, power;
    cin >> base >> power;

    cout << my_power(base, power);

    return 0;
}