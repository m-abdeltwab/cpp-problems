#include <iostream>
using namespace std;

//arr[4] + arr[3] + arr[2] + arr[1]
//arr[1] + 1 len - 3
//arr[2] + 1  len - 2

//arr[len-1:3] + arr_accumulation(arr, len-1:)

// arr[0]
// arr[0] + arr[1]
// arr[0] + arr[1] + arr[2]
// arr[0] + arr[1] + arr[2] + arr[3]

void arr_accumulation(int arr[], int len){
    if(len == 1) {
        return;
    }

    arr_accumulation(arr, len-1);
    arr[len - 1] += arr[len - 2];

}

int main(){
    int arr[] {1, 2, 3, 4, 5, 6};
    int len = 6;

    arr_accumulation(arr,  6);
    for(int i = 0; i < len ; ++i){
        cout << arr[i]<< " ";
    }

    return 0;
}