#include <iostream>
using namespace std;

int main(){
    int cases, num, result;
    cin >> cases;

    while (cases){
        result = 0;
        cin >> num;
        while (num){
           result+=num;
            num--;
        }
        cout << result << endl;
        cases--;
    }


    return 0;
}