#include <iostream>
using namespace std;

int main(){
    int a, b, c ;
    cin >> a >> b >> c;

//    if (a < b){
//        if (a < c ){
//            cout << a;
//        }else {
//            cout <<c;
//        }
//
//    }else if (b < c){
//        cout << b;
//    }else{
//        cout <<c;
//    }

int answer = a;
if (answer > b){
    answer = b;
}
if(answer > c){
    answer = c;
}
cout <<answer;

    return 0;
}