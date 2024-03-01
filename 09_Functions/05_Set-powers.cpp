#include <iostream>
using namespace std;

void set_powers(int arr[], int len, int m){
        arr[0] = 1;

        for(int i = 1; i < len; ++i){
            arr[i] = arr[i - 1] * m;
        }
}



int main() {
    int arr[100], len, m;
    cin >> len >> m;


    set_powers(arr, len, m);

    for(int i = 0; i < len; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}