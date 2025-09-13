#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// -------------------------
// ✅ Student’s Task
// -------------------------
// 1. Define a structure Employee with members:
//    - id (int)
//    - name (string)
//    - department (string)
//    - salary (double)
// 2. Implement processInput() to read all employees.
// 3. Implement performOperations() to:
//    - Calculate and print department-wise total salary
//    - Find and display the highest-paid employee
//    - Sort and display employees by salary (descending)
// -------------------------

// TODO: Define your structure here
struct Employee {
    // your code here
    int id;
    string name;
    string department;
    double salary;
};

// TODO: Implement input processing
void processInput(vector<Employee> &employees) {
    // your code here
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        Employee e;
        cin>>e.id>>e.name>>e.department>>e.salary;
        employees.push_back(e);
    }
}

// TODO: Implement operations
void performOperations(vector<Employee> &employees) {
    // your code here
    vector<string> departments;
    vector<double> totalSalaries;

    for (const Employee &e : employees) {
        bool found = false;
        for (int j = 0; j < departments.size(); ++j) {
            if (departments[j] == e.department) {
                totalSalaries[j] += e.salary;
                found = true;
                break;
            }
        }
        if (!found) {
            departments.push_back(e.department);
            totalSalaries.push_back(e.salary);
        }
    }
    cout<<"Department-wise Salary:"<<endl;
    for (int k=0;k<departments.size();k++){
        cout<<departments[k]<<": "<<totalSalaries[k]<<endl;
    }
    sort(employees.begin(),employees.end(),[](const Employee &a,const Employee &b){return a.salary>b.salary;});
    cout<<"Highest Paid: "<<employees[0].name<<" ("<<employees[0].salary<<")"<<endl;
    cout<<"Sorted by Salary:"<<endl;
    for (int m=0;m<employees.size();m++){
        cout<<employees[m].name<<' '<<employees[m].salary<<endl;
    }
}

// -------------------------
// Main driver (DO NOT CHANGE)
// -------------------------
int main() {
    vector<Employee> employees;

    processInput(employees);
    performOperations(employees);

    return 0;
}
