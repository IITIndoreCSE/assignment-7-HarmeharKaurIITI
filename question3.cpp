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
    int accNo;
    string name;
    int balance;
};

// TODO: Implement input processing
void processInput(vector<BankAccount> &accounts) {
    // your code here
    int n;
    cin>>n;
    for(int j=0;j<n;j++){
        BankAccount b;
        cin>>b.accNo>>b.name>>b.balance;
        accounts.push_back(b);
    
    }    
}

// TODO: Implement operations
void performOperations(vector<BankAccount> &accounts) {
    // your code here
    int acc;
    int choice;
    int amount;
    cin>>acc>>choice>>amount;
    int indexno;
    for (int k=0;k<accounts.size();k++){
    if (accounts[k].accNo==acc){
    indexno=k;
    }
    }
    
    if (choice==1){
    accounts[indexno].balance+=amount;
    }
    else if (choice==2){
        if (accounts[indexno].balance>=amount){
            accounts[indexno].balance-=amount;
        }
    }
}

// -------------------------
// Main driver (DO NOT CHANGE)
// -------------------------
int main() {
    vector<BankAccount> accounts;

    processInput(accounts);
    performOperations(accounts);

    // Output final state of all accounts
    for (int i = 0; i < (int) accounts.size(); i++) {
         cout << accounts[i].accNo << " "
              << accounts[i].name << " "
              << accounts[i].balance << "\n";
     }

    return 0;
}
