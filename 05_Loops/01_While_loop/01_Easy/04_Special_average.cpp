#include <iostream>
using namespace std;

int main(){
    int count, num, index, even_count = 0;
    double even_sum = 0, odd_sum = 0 ;

    cin >> count;
    index = 1;

    while (index <= count){
        cin >> num;
        if(index % 2 == 0) {
            even_sum += num;
            even_count++;
        }
        else {
            odd_sum+= num;
        }
        index++;
    }
    cout << (odd_sum / (count - even_count)) <<" "<<even_sum / even_count;



    return 0;
}