#include <iostream>
using namespace std;

int main(){

    int a, b , c;
    cin >> a >> b >> c;
// Way -1
//    if (a < b && b < c ){
//        cout << a << b << c;
//    }
//    if (a < c && c < b){
//        cout << a << c << b;
//    }
//    if (b < a && a < c){
//        cout << b << a << c;
//    }
//    if (b < c && c < a){
//        cout << b << c << a;
//    }
//    if (c < a && a < b){
//        cout << c << a << b;
//    }
//    if ( c < b && b < a){
//        cout << c << b << a;
//    }


// Way -2
    int temp;
    if (a > b){
        temp = b;
        b = a;
        a = temp;
    }
    if(b > c){
        temp = c;
        c = b;
        b = temp;
    }
    if(a > c){
        temp = c;
        c = a;
        a = temp;
    }
    cout << a << b << c;


    return 0;
}