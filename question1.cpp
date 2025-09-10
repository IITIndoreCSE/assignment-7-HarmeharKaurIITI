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
};

// Implement input processing
void processInput(vector<Student> &students) {
    // TODO: Read number of students and their details
    // Hint: resize vector, input rollNo, name, and 5 marks
}

// Implement operations
void performOperations(vector<Student> &students) {
    // TODO:
    // 1. Calculate total & average marks for each student
    // 2. Print details (roll, name, total, average)
    // 3. Find and print topper student
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
