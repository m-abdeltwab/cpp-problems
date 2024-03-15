#include <iostream>
using namespace std;


int suffix_sum(int arr[], int suffix){
    if(suffix == 1){
        return arr[0];
    }
    return arr[suffix - 1] + suffix_sum(arr,suffix - 1);
}

int main(){
    int arr[] {1, 3, 4, 6, 7};
    int suffix = 3;

    cout << suffix_sum(arr, suffix);
    return 0;
}