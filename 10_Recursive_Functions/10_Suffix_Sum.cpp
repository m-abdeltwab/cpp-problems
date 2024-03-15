#include <iostream>
using namespace std;


int suffix_sum(int arr[], int suffix, int len){
    if(suffix == 0){
        return 0;
    }
    return arr[len - 1 ] + suffix_sum(arr,suffix-1 ,len-1);
}

int main(){
    int arr[] {1, 3, 10, 6, 7};
    int suffix = 3;
    int len = 5;

    cout << suffix_sum(arr, suffix, len);
    return 0;
}