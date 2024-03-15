#include <iostream>
using namespace std;


int sequence(int num){
    cout << num << " ";
    if (num == 1){

        return 0;
    }
    if(num % 2 == 0){
        sequence(num /2);

    }
    if(num % 2 != 0){
        sequence(3 * num + 1);
    }

}


int main() {
    int n;
    cin >> n;
    cout << sequence(n);

    return 0;
}