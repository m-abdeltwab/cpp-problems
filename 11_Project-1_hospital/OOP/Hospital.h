#include <iostream>
using namespace std;
#include <string>
#include <vector>

class Patient
{
public:
    Patient(string name, int status) : name(name), status(status) {}
    string getName() const { return name; }
    int getStatus() const { return status; }

private:
    string name;
    int status; // 0 = regular, 1 = urgent
};

class Hospital
{
public:
    Hospital()
    {
        for (int i = 0; i < 20; ++i)
        {
            vector<Patient> specialization;
            specializations.push_back(specialization);
        }
    }

    void addPatient()
    {
        int specialization;
        string name;
        int status;

        cout << "Enter specialization (1-20): ";
        cin >> specialization;

        if (specializations[specialization - 1].size() >= 5)
        {
            cout << "Sorry, no available spots for this specialization." << endl;
            return;
        }

        cout << "Enter patient name: ";
        cin >> name;
        cout << "Enter status (0 = regular, 1 = urgent): ";
        cin >> status;

        Patient patient(name, status);
        if (status == 0)
        {
            specializations[specialization - 1].push_back(patient);
        }
        else
        {
            specializations[specialization - 1].insert(specializations[specialization - 1].begin(), patient);
        }
    }

    void printPatients()
    {
        for (int i = 0; i < 20; ++i)
        {
            if (!specializations[i].empty())
            {
                cout << "Specialization " << i + 1 << " patients:" << endl;
                for (const auto &patient : specializations[i])
                {
                    cout << "- " << patient.getName() << endl;
                }
            }
        }
    }

    void pickupPatient()
    {
        int specialization;

        cout << "Enter specialization (1-20): ";
        cin >> specialization;

        if (specializations[specialization - 1].empty())
        {
            cout << "No patients for this specialization." << endl;
            return;
        }

        Patient patient = specializations[specialization - 1].front();
        specializations[specialization - 1].erase(specializations[specialization - 1].begin());

        cout << "Dr. picking up patient: " << patient.getName() << endl;
    }

private:
    vector<vector<Patient>> specializations;
};
