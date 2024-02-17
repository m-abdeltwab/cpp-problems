#include<iostream>
using namespace std;




int main() {

    double odd_1, odd_2, odd_3, odd_4;
    double even_1, even_2, even_3, even_4;

    cin >> odd_1 >> even_1;
    cin >> odd_2 >> even_2;
    cin >> odd_3 >> even_3;
    cin >> odd_4 >> even_4;

    int even_sum = even_1 + even_2 + even_3 + even_4;
    int odd_sum = odd_1 + odd_2 + odd_3 + odd_4;
    cout << even_sum << odd_sum;

return 0;
}