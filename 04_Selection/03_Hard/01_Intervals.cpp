#include <iostream>
using namespace std;

int main(){
    int num, interval_count = 0, start, end;

    cin >> num;

    cin >>start >> end;
    interval_count += (start <= num && num <= end);

    cin >>start >> end;
    interval_count += (start <= num && num <= end);

    cin >>start >> end;
    interval_count += (start <= num && num <= end);

    cout << interval_count;


    return 0;
}