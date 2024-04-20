#include <iostream>
using namespace std;

// const int   MAX_SPECIALIZATION = 20;
const int MAX_QUEUE = 5;

string names[20][5];
int status[20][5];
bool queue_length[20];

int menu()
{
    int choice = -1;

    while (choice == -1)
    {

        cout << "\nHospital System Menu" << endl;
        cout << "1. Add Patient" << endl;
        cout << "2. Print Patients" << endl;
        cout << "3. Pickup Patient" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (!(1 <= choice && choice <= 4))
        {
            cout << "Invalid choice. Try again" << endl;
            choice = -1;
        }
    }
    return choice;
}

bool addPatients()
{
    int spec, st;
    string name;
    cout << "Enter Specialization, name and status: ";
    cin >> spec >> name >> st;

    int pos = queue_length[spec];
    if (pos >= 5)
    {
        cout << "Sorry we can't add more patients for this specialization" << endl;
        return false;
    }

    if (st == 0) // regular, add to end
    {
        names[spec][pos] = name;
        status[spec][pos] = st;
        queue_length[spec]++;
    }
    else
    {
        // urgent, add to begin. Shift, then add
        // shift_right(spec, names[spec], status[spec]);
        names[spec][0] = name;
        status[spec][0] = st;
    }
}

int main()
{

    return 0;
}