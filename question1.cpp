#include <iostream>
#include <vector>
#include <string>
using namespace std;

// -------------------------
// ✅ Student’s Task:
// 1. Define the Student struct with members:
//      - rollNo
//      - name
//      - marks (array of 5 subjects)
// 2. Implement processInput(): read all student data
// 3. Implement performOperations(): 
//      - calculate total and average for each student
//      - print roll, name, total, average
//      - find and print topper student
// -------------------------

// Define your structure here
struct Student {
    // TODO: Implement struct members
    int rollNo;
    string name;
    int marks[5];
};

// Implement input processing
void processInput(vector<Student> &students) {
    // TODO: Read number of students and their details
    // Hint: resize vector, input rollNo, name, and 5 marks
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        Student s;
         cin>>s.rollNo>>s.name>>s.marks[0]>>s.marks[1]>>s.marks[2]>>s.marks[3]>>s.marks[4];
         students.push_back(s);
    
    }
}

// Implement operations
void performOperations(vector<Student> &students) {
    // TODO:
    // 1. Calculate total & average marks for each student
    // 2. Print details (roll, name, total, average)
    // 3. Find and print topper student
    int totalarr[students.size()];
    for(int j=0;j<students.size();j++){
         double sum=0;
         for(int k=0;k<5;k++){
         sum+=students[j].marks[k];}
         double avg=sum/5;
         cout<<"Roll: "<<students[j].rollNo<<" Name: "<<students[j].name<<" Total: "<<sum<<" Avg: "<<avg<<endl;
         totalarr[j]=sum;
    }
    int largest=0;
    string topper;
    int trollno;
    for(int m=0;m<students.size();m++){
        if(totalarr[m]>largest){
             largest=totalarr[m];
             topper=students[m].name;
             trollno=students[m].rollNo;
        }
    }
    cout<<endl;
    cout<<"Topper: "<<topper<<" (Roll "<<trollno<<") with Total "<<largest<<endl;
}

// -------------------------
// Main driver (Do NOT change)
// -------------------------
int main() {
    vector<Student> students;

    processInput(students);
    performOperations(students);

    return 0;
}
