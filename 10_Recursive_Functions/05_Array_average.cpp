#include <iostream>
using namespace std;

//arr[len - 1] + arr(arr, len - 1)

double arr_sum(int arr[], int len){
    if(len == 1){
        return arr[0];
    }

    double sub_result = arr_sum(arr, len - 1);

    sub_result = sub_result * (len-1);

    return (sub_result + arr[len - 1] ) / len;

}


int main(){
    int arr[] {1, 2, 3, 4, 5};

    cout << arr_sum(arr,  5);

    return 0;
}