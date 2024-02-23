#include <iostream>
using namespace std;


int main(){
    int num;
    cin >> num;

    if(num <= 1){
        cout <<"NO";
    }
    else{
        bool is_prime = true;

        for(int i = 2; i < num; ++i){
            if(num % i == 0){
                is_prime = false;
                break;
            }
        }

        if(is_prime)
            cout <<"YES";
        else
            cout <<"NO";

    }


    return 0;
}