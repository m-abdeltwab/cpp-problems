#include <iostream>
#include <climits>
using namespace std;

int main(){
    int cycles, n[999];
    cin >> cycles;

    for(int i = 0; i < cycles; ++i){
        cin >>n[i];
    }

    int result = 0;
    for(int i = 0; i < cycles; ++i){
        result += (n[i] == n[cycles - i - 1]);

    }

    if(result)
        cout << "Yes";
    else
        cout << "NO";
    return 0;
}