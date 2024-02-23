#include<iostream>
using namespace std;




int main() {
    int age_in_days, years, months, days;
    cin >> age_in_days;
    years = age_in_days / 360;
    months = (age_in_days % 360) / 30;
    days = (age_in_days % 360) % 30;

    cout << years <<" "<<months<< " " << days;




return 0;
}