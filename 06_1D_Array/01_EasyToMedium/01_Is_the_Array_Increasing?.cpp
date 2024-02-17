#include <iostream>
#include <climits>
using namespace std;

int main(){
    int cycle, arr[200];
    bool is_increase;

    cin >> cycle;
    for(int i = 0; i < cycle; ++i){
        cin >> arr[i];
    }

    for(int i = 0; i < cycle; ++i){
        is_increase = (arr[i] >= arr[i + 1]);
    }
    cout << is_increase;
    return 0;
}