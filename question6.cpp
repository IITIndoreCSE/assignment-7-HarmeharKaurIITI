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
    string name;
    int matches;
    vector <int> runs;
};

// Process input function
void processInput(vector<Cricketer> &players) {
    // TODO: Take input for number of players and their details
    // Hint: resize vector, then input name, matches, and runs
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        Cricketer c;
        cin>>c.name>>c.matches;
        c.runs.resize(c.matches);
        for (int j=0;j<c.matches;j++){
            cin>>c.runs[j];
        }
        players.push_back(c);
    }
    
}

// Perform operations function
void performOperations(vector<Cricketer> &players) {
    // TODO:
    // 1. Calculate average runs for each player
    // 2. Print each player’s average
    // 3. Find and print best player with highest average
    double largest=0;
    int indexno=0;
    for (int k=0;k<players.size();k++){
        double sum=0;
        for(int m=0;m<players[k].matches;m++){
            sum+=players[k].runs[m];
        }
        double avg=sum/players[k].matches;
        cout<<players[k].name<<" Avg: "<<avg<<endl;
        if (avg>largest){
            largest=avg;
            indexno=k;
        }
    }
    cout<<"Best Player: "<<players[indexno].name<<" with Avg "<<largest<<endl;
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
