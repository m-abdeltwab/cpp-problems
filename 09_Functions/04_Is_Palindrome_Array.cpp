#include <iostream>
using namespace std;


bool is_palindrome(int arr[], int n){
    int start = 0,  end = n - 1;

    while (start < end){
        if(arr[start] != arr[end]){
            return false;
        }
        start++, end--;
    }

    return true;
}


int main() {
    int cycle, arr[10];
    cin >> cycle;

    for(int i = 0; i < cycle; ++i){
        cin >> arr[i];
    }

    cout << is_palindrome(arr, cycle);

    return 0;
}