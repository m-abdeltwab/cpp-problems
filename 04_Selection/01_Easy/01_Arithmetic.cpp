#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b ;
//    First Way
//    if(a % 2 != 0 && b % 2 != 0 ){
//        cout << a * b;
//    }
//    if(a % 2 == 0 && b % 2 == 0 ){
//        cout << a / b;
//    }
//    if(a % 2 != 0 && b % 2 == 0 ){
//        cout << a + b;
//    }
//    if(a % 2 == 0 && b % 2 != 0 ){
//        cout << a - b;
//    }

//Second Way
    bool is_a_even = (a % 2 == 0);
    bool is_b_even = (b % 2 == 0);

    if(!is_a_even && !is_b_even){
        cout << a * b;
    }
    if(is_a_even && is_b_even ){
        cout << a / b;
    }
    if(!is_a_even && is_b_even){
        cout << a + b;
    }
    if(is_a_even&& !is_b_even ){
        cout << a - b;
    }




    return 0;
}