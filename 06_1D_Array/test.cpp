#include <iostream>
#include <climits>
using namespace std;

int main(){
    int cycle, max = INT_MIN, n[200];
    cin >> cycle;
    for (int i = 0; i < cycle; ++i){
        cin >> n[i];
    }

    for(int i = 0; i < cycle; ++i){
        int x, y;
        x = n[i];
        for(int j = i + 1; j < cycle; ++j){
            y = n[j];
            if (x + y > max) max = x + y;
        }
    }

    cout << max;

    return 0;
}