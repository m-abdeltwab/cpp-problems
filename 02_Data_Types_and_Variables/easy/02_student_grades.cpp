#include<iostream>
using namespace std;




int main() {

string name_1;
cout << "What is student 1 name : " << endl;
cin >> name_1;

string id_1;
cout << "His id : " << endl;
cin >> id_1;

double grade_1;
cout << "His math exam grade : " << endl;
cin >> grade_1;

// Student 2
string name_2;
cout << "What is student 2 name : " << endl;
cin >> name_2;

string id_2;
cout << "His id : " << endl;
cin >> id_2;

double grade_2;
cout << "His math exam grade : " << endl;
cin >> grade_2;


//    Display the info
cout << "Student grades in math"<<endl;
cout << "======================"<< endl;
cout << name_1 << " (with id " << id_1 << ") " << "got grade : " << grade_1 << endl;
cout << name_2 << " (with id " << id_2 << ") " << "got grade : " << grade_2 << endl;
cout << (grade_1 + grade_2) / 2 << endl;


return 0;
}

