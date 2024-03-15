#include<iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    int pos = 0;

    while (pos < N) {
        string str;
        cin>>str;


        if (str == "no" || str == "No" || str == "nO" || str == "NO" ||
            str == "on" || str == "oN" || str == "On" || str == "ON")
            cout<<str<<" ";

        pos++;
    }
    return 0;
}

