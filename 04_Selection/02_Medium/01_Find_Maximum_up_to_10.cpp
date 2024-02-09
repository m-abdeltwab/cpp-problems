#include <iostream>
using namespace std;

int main(){
//    Way -1
//    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
//    cin >>num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9 >> num10;

//    int max = num1;
//    if (num2 > max){
//        max = num2;
//    }
//    if (num3 > max){
//        max = num3;
//    }
//    if (num4 > max){
//        max = num4;
//    }
//    if (num5 > max){
//        max = num5;
//    }
//    if (num6 > max){
//        max = num6;
//    }
//    if (num7 > max){
//        max = num7;
//    }
//    if (num8 > max){
//        max = num8;
//    }
//    if (num9 > max){
//        max = num9;
//    }
//    if (num10 > max){
//        max = num10;
//    }

//    Way -2
    int num, max;
    cin >> num; if(max < num) max = num;
    cin >> num; if(max < num) max = num;
    cin >> num; if(max < num) max = num;
    cin >> num; if(max < num) max = num;
    cin >> num; if(max < num) max = num;
    cin >> num; if(max < num) max = num;
    cin >> num; if(max < num) max = num;
    cin >> num; if(max < num) max = num;
    cin >> num; if(max < num) max = num;
    cin >> num; if(max < num) max = num;

    cout << max;

    return 0;
}