#include<iostream>
using namespace std;


int main() {

    double num1, num2, num3, num4, num5;
    cin >> num1 >>num2 >>num3 >>num4 >>num5;

    double average = (num1 + num2 + num3 + num4 + num5) / 5;
    double sum_of_first_3 = num1 + num2 + num3;
    double sum_of_last_2 = num4 + num5;

    cout << "a. The Average : " << average<<endl;
    cout << "b. Sum of first 3 divide by sum of last 2 : " << sum_of_first_3 / sum_of_last_2<<endl;
    cout << "c. Average of first 3 divide by Average of last 2 : " <<(sum_of_first_3 / 3) / (sum_of_last_2 / 2)<<endl;

    cout << "mathematical relationship between B and C? => c = 2/3 * b" <<endl; 




return 0;
}