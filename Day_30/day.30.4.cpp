#include <iostream>
#include <string>

using namespace std;

const int MAX_SIZE = 100;

void showmenu();
void addemp(int empid[], string names[], int days[], double wages[], int &count);
void viewemps(int empid[], string names[], int days[], double wages[], int count);
void markattendance(int empid[], string names[], int days[], int count);
void calcsalary(int empid[], string names[], int days[], double wages[], int count);
void deleteemp(int empid[], string names[], int days[], double wages[], int &count);

void showMenu() {
    cout << "\n EMPLOYEE MANAGEMENT SYSTEM "<< endl;
    cout << "1. Add New Employee"<< endl;
    cout << "2. View All Employees" <<endl;
    cout << "3. Mark Attendance" << endl;;
    cout << "4. Calculate Monthly Salaries" <<endl;
    cout << "5. Delete Employee Record" << endl;
    cout << "6. Exit" << endl;
}

void addemp(int empid[], string names[], int days[], double wages[], int &count) {
    
    if (count >= MAX_SIZE) {
        cout << "\nDatabase is already full" << endl;
        return;
    }

    cout << "/n Add Employee Details "<< endl;
    cout << "Enter Employee ID: ";
    cin >> empid[count];

    
    for (int i = 0; i < count; i++) {
        if (empid[i] == empid[count]) {
            cout << "Error: That ID is already in the system!\n";
            return;
        }
    }

    cin.ignore(); 
    cout << "Enter Full Name: ";
    getline(cin, names[count]);

    cout << "Enter Daily Wage: ";
    cin >> wages[count];

    days[count] = 0; 
    count++; 
    
    cout << "Employee registered successfully!" << endl;
}
void viewemps(int ids[], string names[], int days[], double wages[], int count) {
    if (count == 0) {
        cout << "Nobody is registered yet" << endl;
        return;
    }

    cout << "\n   Employee List   " << endl;
    for (int i = 0; i < count; i++) {
        cout << "ID: " << ids[i] 
             << " | Name: " << names[i] 
             << " | Days Worked: " << days[i] 
             << " | Pay Rate: $" << wages[i] << "\n";
    }
}

void markattendance(int empid[], string names[], int days[], int count) {
    if (count == 0) {
        cout << "System is empty" << endl;
        return;
    }

    int searchId;
    cout << "\nEnter Employee ID to mark present: " << endl;
    cin >> searchId;

    bool isFound = false; 
    for (int i = 0; i < count; i++) {
        if (empid[i] == searchId) {
            days[i]++; 
            cout << "Attendance logged for " << names[i] << endl;
            cout << "Total days worked: " << days[i] << endl;
            isFound = true;
            break;
        }
    }
    
    if (!isFound) {
        cout << "Could not find that Employee ID" <<endl;
    }
}

void calcsalary(int ids[], string names[], int days[], double wages[], int count) {
    if (count == 0) {
        cout << "No records found to calculate";
        return;
    }

    double totalPayout = 0.0;

    cout << "\n Salary Sheet " << endl;
    for (int i = 0; i < count; i++) {
        double currentSalary = days[i] * wages[i];
        totalPayout += currentSalary;

        cout << "ID: " << ids[i] 
             << " | Name: " << names[i] 
             << " | Monthly Salary: Rs" << currentSalary << "\n";
    }

    cout << "Total Company Payout: Rs" << totalPayout << endl;
}

void deleteemp(int empid[], string names[], int days[], double wages[], int &count) {
    if (count == 0) {
        cout << "No records to delete";
        return;
    }

    int targetId;
    cout << "Enter ID of the employee to remove: ";
    cin >> targetId;

    bool isFound = false;
    for (int i = 0; i < count; i++) {
        if (empid[i] == targetId) {
            isFound = true;
            for (int j = i; j < count - 1; j++) {
                empid[j] = empid[j + 1];
                names[j] = names[j + 1];
                days[j] = days[j + 1];
                wages[j] = wages[j + 1];
            }
            count--; 
            cout << "Record deleted";
            break;
        }
    }
    
    if (!isFound) {
        cout << "Employee ID not found";
    }
}

int main() {
    int ids[MAX_SIZE];
    string names[MAX_SIZE];
    int days[MAX_SIZE];
    double wages[MAX_SIZE];
    
    int empCount = 0;
    int choice;

    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addemp(ids, names, days, wages, empCount);
                break;
            case 2:
                viewemps(ids, names, days, wages, empCount);
                break;
            case 3:
                markattendance(ids, names, days, empCount);
                break;
            case 4:
                calcsalary(ids, names, days, wages, empCount);
                break;
            case 5:
                deleteemp(ids, names, days, wages, empCount);
                break;
            case 6:
                cout << "Exiting system";
                break;
            default:
                cout << "Invalid choice";
        }
    } while (choice != 6);

    return 0;
}