#include <iostream>
#include <vector>
#include <string>
using namespace std;

// -------------------------
// ✅ Student’s Task
// -------------------------
// 1. Define a structure BankAccount with members:
//    - accNo (int)
//    - name (string)
//    - balance (double)
// 2. Implement processInput() to read all accounts.
// 3. Implement performOperations() to perform:
//    - Deposit (choice = 1)
//    - Withdrawal (choice = 2, only if sufficient balance)
// 4. Output all accounts after performing the operation.
// -------------------------

// TODO: Define your structure here
struct BankAccount {
    // your code here
};

// TODO: Implement input processing
void processInput(vector<BankAccount> &accounts) {
    // your code here
}

// TODO: Implement operations
void performOperations(vector<BankAccount> &accounts) {
    // your code here
}

// -------------------------
// Main driver (DO NOT CHANGE)
// -------------------------
int main() {
    vector<BankAccount> accounts;

    processInput(accounts);
    performOperations(accounts);

    // Output final state of all accounts
    // for (int i = 0; i < (int) accounts.size(); i++) {
    //     cout << accounts[i].accNo << " "
    //          << accounts[i].name << " "
    //          << accounts[i].balance << "\n";
    // }

    return 0;
}
