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
    int id;
    string title;
    string author;
    double price;
};

// TODO: Implement input processing
void processInput(vector<Book> &books, string &searchTitle) {
    // your code here
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        Book b;
        cin>>b.id>>b.title>>b.author>>b.price;
        books.push_back(b);
        cin>>searchTitle;
    
    }
}

// TODO: Implement operations
void performOperations(vector<Book> &books, const string &searchTitle) {
    // your code here
    double largest=0;
    int indexno;
    for (int j=0;j<books.size();j++){
        if(books[j].title==searchTitle){
             cout<<"Found: "<<searchTitle<<" by "<<books[j].author<<endl;
        }
        if(books[j].price>=largest){
            largest=books[j].price;
            indexno=j;
        }
        
    }
    cout<<"Most Expensive: "<<books[indexno].title<<" Price: "<<largest<<endl;
    sort(books.begin(), books.end(), [](const Book &a, const Book &b) {
        return a.price < b.price; 
    });

    cout << "\nSorted books by Price:\n";
    for (const auto &book : books) {
        cout <<book.id<<" "<<book.title<<" ("<< book.price<<")"<< endl;
    }
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
