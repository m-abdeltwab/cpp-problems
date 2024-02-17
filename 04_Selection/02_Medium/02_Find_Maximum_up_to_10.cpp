#include <iostream>
using namespace std;

int main(){
    //    Way -2
    int num, max, n;
    cin >> n >> max;
    n-=1;

    if(n > 0) n-=1 ; cin >> num; if(max < num) max = num;
    if(n > 0) n-=1 ; cin >> num; if(max < num) max = num;
    if(n > 0) n-=1 ; cin >> num; if(max < num) max = num;
    if(n > 0) n-=1 ; cin >> num; if(max < num) max = num;
    if(n > 0) n-=1 ; cin >> num; if(max < num) max = num;
    if(n > 0) n-=1 ; cin >> num; if(max < num) max = num;
    if(n > 0) n-=1 ; cin >> num; if(max < num) max = num;
    if(n > 0) n-=1 ; cin >> num; if(max < num) max = num;
    if(n > 0) n-=1 ; cin >> num; if(max < num) max = num;



    cout << max;

    return 0;
}