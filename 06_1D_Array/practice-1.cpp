#include <iostream>
#include <climits>
using namespace std;

int main(){
    int num, max, before_max, arr[200] {};
    cin >> num;

    max = INT_MIN;
    before_max = INT_MIN;

    for(int i = 0; i < num; ++i){
        cin >> arr[i];

        if(arr[i] > max){
            before_max = max;
            max = arr[i];
        }
        else if(arr[i] > before_max && arr[i] < max){
            before_max = arr[i];
        }
    }
    cout << max <<" "<< before_max;

    return 0;
}