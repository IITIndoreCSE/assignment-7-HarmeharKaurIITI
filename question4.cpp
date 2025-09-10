#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// -------------------------
// ✅ Student’s Task
// -------------------------
// 1. Define a structure Book with members:
//    - id (int)
//    - title (string)
//    - author (string)
//    - price (double)
// 2. Implement processInput() to read all books
//    and also read the searchTitle string.
// 3. Implement performOperations() to:
//    - Search for a book by title and print if found
//    - Find the most expensive book
//    - Sort and display books by price
// -------------------------

// TODO: Define your structure here
struct Book {
    // your code here
};

// TODO: Implement input processing
void processInput(vector<Book> &books, string &searchTitle) {
    // your code here
}

// TODO: Implement operations
void performOperations(vector<Book> &books, const string &searchTitle) {
    // your code here
}

// -------------------------
// Main driver (DO NOT CHANGE)
// -------------------------
int main() {
    vector<Book> books;
    string searchTitle;

    processInput(books, searchTitle);
    performOperations(books, searchTitle);

    return 0;
}
