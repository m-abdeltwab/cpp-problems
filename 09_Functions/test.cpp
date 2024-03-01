#include <iostream>
using namespace std;


int add(int x, int y){
    return x + y;
}

double add(double x, double y){
    return x + y;
}

int main() {
    cout << add(3.2, 4.2);

    return 0;
}