#include <iostream>
using namespace std;


void right_max(int arr[], int len, int start_position=0){
//    if(len == 1 ){
//        return;
//    }
//
//    arr[len-1] = max(arr[len-1], arr[len-2]);
//    right_max(arr, len-1);
    arr = arr + 1;

}

int main(){
    int arr[] {1, 3, 5, 7, 4, 2};
    int len = 6;

//    right_max(arr,  6);
    arr = arr + 1;

    for(int i = 0; i < len ; ++i){
        cout << arr[i]<< " ";
    }

    return 0;
}