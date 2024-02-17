#include <iostream>
using namespace std;

int main(){

    // Way -1
//    int a, b , c;
//    cin >> a >> b >> c;
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
    int a, b, c, temp;
    cin >> a >> b >> c;
    if (b < a){
        temp = b;
        b = a;
        a = temp;
    }
    if (b > c){
        temp = b;
        b = c;
        c = temp;

        if (b < a){
            temp = b;
            b = a;
            a = temp;
        }
    }
    cout << a << b << c;



    return 0;
}