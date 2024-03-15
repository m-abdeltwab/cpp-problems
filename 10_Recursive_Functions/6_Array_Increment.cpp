#include <iostream>
using namespace std;

void arr_increament(int arr[], int len){
    if(len == 1){
        return;
    }

    arr_increament(arr, len - 1);
    arr[len-1] += len-1;
}

int main(){
    int arr[] {1, 8, 2, 10, 3};
    int len = 5;
    arr_increament(arr,  len);

    for(int i = 0; i < len ; ++i){
        cout << arr[i]<< " ";
}

    return 0;
}