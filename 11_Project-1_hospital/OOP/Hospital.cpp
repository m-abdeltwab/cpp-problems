using namespace std;

#include "Hospital.h"

int main() {
    Hospital hospital;
    int choice;

    do {
        cout << "\nHospital System Menu" << endl;
        cout << "1. Add Patient" << endl;
        cout << "2. Print Patients" << endl;
        cout << "3. Pickup Patient" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                hospital.addPatient();
                break;
            case 2:
                hospital.printPatients();
                break;
            case 3:
                hospital.pickupPatient();
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}