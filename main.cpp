#include <iostream>
#include <vector>
#include <map>

using namespace std;

enum DepartmentCode {
    CARDIOLOGY = 1,
    DERMATOLOGY,
    ENDOCRINOLOGY,
    GASTROENTEROLOGY,
    HEMATOLOGY,
    INFECTIOUS,
    NEPHROLOGY,
    NEUROLOGY,
    OBSTETRICS,
    ONCOLOGY,
    OPHTHALMOLOGY,
    ORTHOPEDICS,
    OTOLARYNGOLOGY,
    PEDIATRICS,
    PULMONOLOGY,
    RHEUMATOLOGY,
    UROLOGY,
    ALLERGY,
    IMMUNOLOGY,
    PSYCHIATRY = 20
};

enum PatientStatus {
    REGULAR,
    IRREGULAR
};

class Patient {
public:
    vector<string> name;
    vector<PatientStatus> status;
};

class HospitalSystem {
private:
    map<DepartmentCode, string> department;
    map<DepartmentCode, Patient> patients;

public:
    HospitalSystem() {
        initializeDepartment();
        list();
    }

    void initializeDepartment() {
        department[CARDIOLOGY] = "cardiology";
        department[DERMATOLOGY] = "dermatology";
        department[ENDOCRINOLOGY] = "endocrinology";
        department[GASTROENTEROLOGY] = "gastroenterology";
        department[HEMATOLOGY] = "hematology";
        department[INFECTIOUS] = "infectious";
        department[NEPHROLOGY] = "nephrology";
        department[NEUROLOGY] = "neurology";
        department[OBSTETRICS] = "obstetrics";
        department[ONCOLOGY] = "oncology";
        department[OPHTHALMOLOGY] = "ophthalmology";
        department[ORTHOPEDICS] = "orthopedics";
        department[OTOLARYNGOLOGY] = "otolaryngology";
        department[PEDIATRICS] = "pediatrics";
        department[PULMONOLOGY] = "pulmonology";
        department[RHEUMATOLOGY] = "rheumatology";
        department[UROLOGY] = "urology";
        department[ALLERGY] = "allergy";
        department[IMMUNOLOGY] = "immunology";
        department[PSYCHIATRY] = "psychiatry";
    }

    void list() {
        int c;

        do {
            cout << "Menu:\n"
                 << "1) Add patient\n"
                 << "2) Pickup a patient\n"
                 << "3) Print Patients\n"
                 << "4) Exit\n"
                 << "Enter your choice: ";

            cin >> c;

            switch (c) {
                case 1:
                    addPatient();
                    break;
                case 2:
                    pickupPatient();
                    break;
                case 3:
                    printPatients();
                    break;
                case 4:
                    cout << "Exiting the program.\n";
                    break;
                default:
                    cout << "Invalid input. Please try again.\n";
                    break;
            }
        } while (c != 4);
    }


    void addPatient() {
        int c;
        cout << "Choose Specification:" << endl;
        for (int i = 1; i <= 20; i++) {
            cout << i << ") " << department[static_cast<DepartmentCode>(i)] << "\n";
        }
        cin >> c;

        if (c >= 1 && c <= 20) {
            int sz = patients[static_cast<DepartmentCode>(c)].name.size();
            if (sz < 5) {
                string name;
                int statusInt;

                cout << "Name:";
                cin >> name;

                cout << "Is_regular (0 for REGULAR, 1 for IRREGULAR):";
                cin >> statusInt;

                PatientStatus status = static_cast<PatientStatus>(statusInt);

                patients[static_cast<DepartmentCode>(c)].name.push_back(name);
                patients[static_cast<DepartmentCode>(c)].status.push_back(status);
            } else {
                cout << "Sorry, This department is full of patients" << endl;
            }
        } else {
            cout << "!Invalid input, try again" << endl;
        }
    }

    void pickupPatient() {
        int c;
        cout << "Choose Specification:" << endl;
        for (int i = 1; i <= 20; i++) {
            cout << i << ") " << department[static_cast<DepartmentCode>(i)] << "\n";
        }
        cin >> c;

        if (!patients[static_cast<DepartmentCode>(c)].name.empty()) {
            patients[static_cast<DepartmentCode>(c)].name.pop_back();
            patients[static_cast<DepartmentCode>(c)].status.pop_back();
        } else {
            cout << "No patients in this department" << endl;
        }
    }

    void printPatients() {
        for (int i = 1; i <= 20; i++) {
            cout << department[static_cast<DepartmentCode>(i)] << ":\n";
            for (size_t j = 0; j < patients[static_cast<DepartmentCode>(i)].name.size(); j++) {
                cout << "name: " << patients[static_cast<DepartmentCode>(i)].name[j] << "\n";
                cout << "Status: " << patients[static_cast<DepartmentCode>(i)].status[j] << "\n\n";
            }
            cout << "\n\n";
        }
        cout << "\n\n";
    }
};

int main() {
    HospitalSystem hospital;
    return 0;
}
