#include <iostream>
#include <string>

const int MAX_SPECIALIZATIONS = 20;
const int MAX_SPOTS = 5;

int queues[MAX_SPECIALIZATIONS][MAX_SPOTS] = {0}; // 0 represents an empty spot
int queueSizes[MAX_SPECIALIZATIONS] = {0};        // Keep track of the number of patients in each queue

void addPatient()
{
    int specialization, status;
    std::string name;

    std::cout << "Enter specialization (1-20): ";
    std::cin >> specialization;

    if (queueSizes[specialization - 1] == MAX_SPOTS)
    {
        std::cout << "Sorry, no spots available for this specialization.\n";
        return;
    }

    std::cout << "Enter patient name: ";
    std::cin >> name;

    std::cout << "Enter status (0 for regular, 1 for urgent): ";
    std::cin >> status;

    if (status == 0)
    {
        queues[specialization - 1][queueSizes[specialization - 1]] = name;
    }
    else
    {
        // Shift existing patients to make room for urgent patient
        for (int i = queueSizes[specialization - 1]; i > 0; i--)
        {
            queues[specialization - 1][i] = queues[specialization - 1][i - 1];
        }
        queues[specialization - 1][0] = name;
    }

    queueSizes[specialization - 1]++;
}

void printPatients()
{
    for (int i = 0; i < MAX_SPECIALIZATIONS; i++)
    {
        if (queueSizes[i] > 0)
        {
            std::cout << "Patients for specialization " << i + 1 << ":\n";
            for (int j = 0; j < queueSizes[i]; j++)
            {
                std::cout << queues[i][j] << std::endl;
            }
        }
    }
}

void doctorPickup()
{
    int specialization;
    std::cout << "Enter specialization for doctor pickup: ";
    std::cin >> specialization;

    if (queueSizes[specialization - 1] == 0)
    {
        std::cout << "No patients in the queue for this specialization.\n";
        return;
    }

    std::cout << "Patient " << queues[specialization - 1][0] << " can go with the doctor.\n";

    // Shift patients to remove the picked-up patient
    for (int i = 0; i < queueSizes[specialization - 1] - 1; i++)
    {
        queues[specialization - 1][i] = queues[specialization - 1][i + 1];
    }

    queueSizes[specialization - 1]--;
}

int main()
{
    int choice;
    do
    {
        std::cout << "\nHospital System Menu\n";
        std::cout << "1. Add Patient\n";
        std::cout << "2. Print Patients\n";
        std::cout << "3. Doctor Pickup\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            addPatient();
            break;
        case 2:
            printPatients();
            break;
        case 3:
            doctorPickup();
            break;
        case 4:
            std::cout << "Exiting program.\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }
    } while (choice != 4);

    return 0;
}
