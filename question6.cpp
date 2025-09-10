#include <iostream>
#include <vector>
#include <string>
using namespace std;

// -------------------------
// ✅ Student’s Task:
// 1. Define the Cricketer struct with members:
//      - name
//      - matches
//      - runs (array for runs in each match)
// 2. Implement processInput(): read all player data
// 3. Implement performOperations(): calculate averages, 
//    print each player's average, and find the best player
// -------------------------

// Define your structure here
struct Cricketer {
    // TODO: Implement struct with name, matches, and runs[]
};

// Process input function
void processInput(vector<Cricketer> &players) {
    // TODO: Take input for number of players and their details
    // Hint: resize vector, then input name, matches, and runs
}

// Perform operations function
void performOperations(vector<Cricketer> &players) {
    // TODO:
    // 1. Calculate average runs for each player
    // 2. Print each player’s average
    // 3. Find and print best player with highest average
}

// -------------------------
// Main driver (Do NOT change)
// -------------------------
int main() {
    vector<Cricketer> players;

    processInput(players);
    performOperations(players);

    return 0;
}
