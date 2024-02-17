#include <iostream>
#include <climits>
using namespace std;

int main(){
    int cycle, n[200];
    int min = INT_MAX, max = INT_MIN;

    cin >> cycle;

    // Create Array
    for(int i = 0; i < cycle; ++i){
        cin >> n[i];
        if(n[i] < min) {
            min = n[i];
        }
        if(n[i] > max) {
            max = n[i];
        }
    }


    for(int i = 0; i < cycle; ++i){
        if(n[i] == min) {
            n[i] = max;
        }
        else if(n[i] == max) {
            n[i] = min;
        }
    }

    // Print Array
    for(int i = 0; i < cycle; ++i){
        cout << n[i] << " ";
    }

    return 0;
}