#include <iostream>
using namespace std;


int my_power(int base, int power){

    if(power == 0){
        return 1;
    }
    else {
        return base * my_power(base, power-1);


    }

}


int main(){
    int base, power;
    cin >> base >> power;
    cout << my_power(base, power);

    return 0;
}