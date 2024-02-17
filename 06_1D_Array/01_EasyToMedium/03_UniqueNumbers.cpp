#include <iostream>
#include <climits>
using namespace std;

int main(){
    int cycle, n[1000], arr_cp[1000];
    cin >> cycle;

    for(int i = 0; i < cycle; ++i){
        cin >> n[i];
    }
    for(int i = 0; i < cycle; ++i){
        if(n[i] == n[i + 1]){
            continue;
        }else{
            arr_cp[i] = n[i];
        }
        cout << arr_cp[i] << " ";
    }


    return 0;
}