#include <iostream>
using namespace std;

int main(){
    int x, num1, num2, num3, num4, num5;
    cin >> x >> num1>> num2>> num3>> num4>> num5;

    int greater_than_x ;
    int smaller_than_x ;

    if(num1 > x){
        greater_than_x++;
    }
    if(num2 > x){
        greater_than_x++;
    }
    if(num3 > x){
        greater_than_x++;
    }
    if(num4 > x){
        greater_than_x++;
    }
    if(num5 > x){
        greater_than_x++;
    }
//==========================
    if(num1 <= x){
        smaller_than_x++;
    }
    if(num2 <= x){
        smaller_than_x++;
    }
    if(num3 <= x){
        smaller_than_x++;
    }
    if(num4 <= x){
        smaller_than_x++;
    }
    if(num5 <= x){
        smaller_than_x++;
    }

    cout <<smaller_than_x << " " << greater_than_x;

    return 0;
}