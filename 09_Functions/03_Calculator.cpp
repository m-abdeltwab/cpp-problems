#include <iostream>
using namespace std;

void read_numbers(double &a, double &b){
    cout <<"Enter 2 Numbers: "<< endl;
    cin >> a >> b;
}
void add_nums(double &a, double &b){
    cout <<"a + b = " << a + b << endl;
}
void sub_nums(double &a, double &b){
    cout <<"a - b = " << a - b<< endl;
}
void multi_nums(double &a, double &b){
    cout <<"a * b = " << a * b<< endl;
}
void divide_nums(double &a, double &b){
    if (b != 0)
        cout <<"a / b = " << a / b << endl;
    else
        cout <<"Zero Division Error"<< endl;
}

int menu(){
    int count = 0;
    double a, b;

    while (true){
        int choice;
        cout << "1- Add 2 numbers\n"
                "2- Subtract 2 numbers\n"
                "3- Multiply 2 numbers\n"
                "4- Divide 2 numbers\n"
                "5- End the program\n";
        cin >> choice;

        if(choice == 5){
            cout << "Number Of Operations is : "<< count;
            break;
        }
        else{
            read_numbers(a, b);

            if(choice == 1){
                add_nums(a, b);
            }
            if(choice == 2){
                sub_nums(a, b);
            }
            if(choice == 3){
                multi_nums(a, b);
            }
            if(choice == 4){
                divide_nums(a, b);
            }
            count++;

        }



    }
}

int main() {

    menu();
    return 0;
}