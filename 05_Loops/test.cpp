#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;



int upper_rows = n;
while (upper_rows){
//        Upper Triangle

//         Print Spaces
        int spaces_1 = 1;
        while (spaces_1 < upper_rows){
            cout << " ";
            spaces_1++;
        }

        int stars = 2 * n;
        while (stars >= 2 * upper_rows){
            cout <<"*";
            stars--;
        }

        cout << endl;
        upper_rows--;
    }




    return 0;
}