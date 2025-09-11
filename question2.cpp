#include <iostream>
#include <vector>
using namespace std;

// -------------------------
// ✅ Student’s Task
// -------------------------
// 1. Define a structure Complex with members:
//    - real (int)
//    - imag (int)
// 2. Implement processInput() to read complex numbers.
// 3. Implement performOperations() to:
//    - Calculate and print the sum of all complex numbers
//    - Calculate and print the difference of all complex numbers
// -------------------------

// TODO: Define your structure here
struct Complex {
    // your code here
    double real;
    double imag;
};

// TODO: Implement input processing
void processInput(vector<Complex> &arr) {
    // your code here
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        Complex c;
        cin>>c.real>>c.imag;
        arr.push_back(c);
    
    }
}

// TODO: Implement operations
void performOperations(vector<Complex> &arr) {
    // your code here
    double additionReal=0;
    double additionImag=0;
    for(int j=0;j<arr.size();j++){
        additionReal+=arr[j].real;
        additionImag+=arr[j].imag;
    }
    double subtractionReal=arr[0].real;
    double subtractionImag=arr[0].imag;
    if (arr.size()!=1){
    for (int k=1;k<arr.size();k++){
        subtractionReal-=arr[k].real;
        subtractionImag-=arr[k].imag;}
    }
    cout<<"Sum: "<<additionReal<<" + "<<additionImag<<'i'<<endl;
    cout<<"Diff: "<<subtractionReal<<" + "<<subtractionImag<<'i'<<endl;
        
}

// -------------------------
// Main driver (DO NOT CHANGE)
// -------------------------
int main() {
    vector<Complex> arr;

    processInput(arr);
    performOperations(arr);

    return 0;
}
