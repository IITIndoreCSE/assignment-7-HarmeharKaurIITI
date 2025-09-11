# C++ Structures, Functions, Arrays, and Pointers — Scientific Assignments

- In these assignments, **you must design your own structs** with at least 3 meaningful fields.
- To make checking easier, you must **use the provided output functions** to print results.
- Your solutions will be graded on correctness and adherence to the format.

## 🧪 Testing System

Each assignment includes **test case** with corresponding input and output files:

- **Input files:** `test_data/input{X}.txt` (e.g., `test_data/input1.txt`)
- **Output files:** `test_data/output{X}.txt` (e.g., `test_data/output1.txt`)
- **Test script:** `check.sh` - runs all programs and validates output against expected results

The programs are designed to accept the input file path as a command line argument.

**To test your solutions:**
```bash
./check.sh
```

The script will test each question with multiple input cases and report which test cases pass/fail.

**To test a specific program:**
```bash
./check.sh question1.cpp
```

This will only test question1.cpp with its input cases.


**To run a program manually with a specific input file:**
```bash
g++  {filename}.cpp -o {filname}
./{filename} < test_data/input1.txt > output.txt
```

Replace `{filename}` with the appropriate question number and `input1.txt` with the desired input file.

---

### **📝 Notes**

- Output formatting is given as the comment, also implement the output formatting in some questions.
- Students need to focus on the logic and struct definition, carefully.

---

# Program 1: Student Structure

### ✅ Student’s Task

1. **Define a `Student` struct**  
   The struct should include the following members:  
   - `rollNo` : Student's roll number  
   - `name` : Student's name  
   - `marks[5]` : Array of marks in 5 subjects  

2. **Implement `processInput()`**  
   - Read student details from a file.  
   - Populate an array or list of `Student` structs.  

3. **Implement `performOperations()`**  
   - Calculate **total marks** for each student.  
   - Calculate **average marks** for each student.  
   - Determine the **topper** based on total marks.  
   - Output the results in the **given format**, also mentioned in the program as comment.  

```
Input : 

3
101 Alice 85 90 78 88 92
102 Bob 70 65 80 75 68
103 Charlie 95 90 85 92 88
```


```
Output : 

Roll: 101 Name: Alice Total: 433 Avg: 86.6
Roll: 102 Name: Bob Total: 358 Avg: 71.6
Roll: 103 Name: Charlie Total: 450 Avg: 90

Topper: Charlie (Roll 103) with Total 450
```
---


# Program 2: Complex Number Structure

### ✅ Student’s Task

1. **Define a `Complex` struct**  
   The struct should include the following members:  
   - `real` : Real part of the complex number  
   - `imag` : Imaginary part of the complex number  

2. **Implement `processInput()`**  
   - Read complex numbers from an input file.  
   - Populate an array or list of `Complex` structs.  

3. **Implement `addition` and `subtraction` in `performOperations()`**  
   - `addition` : Compute the sum of two complex numbers  
   - `subtraction` : Compute the difference between two complex numbers  
   - `performOperations()` : Perform addition and subtraction on the input data and print results.
   - Output the results in the **given format**, also mentioned in the program as comment.

```
Input : 

3
2 3
4 -1
-5 6
```

```
Output : 

Sum: 1 + 8i
Diff: 3 + -2i
```
---


# Program 3: BankAccount Structure

### ✅ Student’s Task

1. **Define a `BankAccount` struct**  
   The struct should include the following members:  
   - `accNo` : Account number  
   - `name` : Account holder's name  
   - `balance` : Current account balance  

2. **Implement `processInput()`**  
   - Read all account details from a file.  
   - Populate an array or list of `BankAccount` structs.  

3. **Implement `performOperations()`**  
   - Perform **deposit** or **withdrawal** operations based on user choice.  
   - Update account balances accordingly.
   - Output formatting code is already implemented in main function just uncomment that.


```
Input : 

3
101 Alice 5000
102 Bob 3000
103 Charlie 7000
101 1 2000
```

```
Output : 

101 Alice 7000
102 Bob 3000
103 Charlie 7000
```


# Program 4: Book Structure

### ✅ Student’s Task

1. **Define a `Book` struct**  
   The struct should include the following members:  
   - `id` : Book ID  
   - `title` : Book title  
   - `author` : Book author  
   - `price` : Book price  

2. **Implement `processInput()`**  
   - Read all book details from a file.  
   - Read the search title from the file.  
   - Populate an array or list of `Book` structs.  

3. **Implement `performOperations()`**  
   - **Search** for a book by title  
   - Find the **most expensive book**  
   - **Sort** books by price and display them 
   - Output formatting instructions are givean as comments based on the returned output.

```
Input :

4
1 CppPrimer Lippman 450
2 AlgoCLRS Cormen 650
3 CleanCode Martin 550
4 DSinC++ Sahni 400
CleanCode
```

```
Output :

Found: CleanCode by Martin
Most Expensive: AlgoCLRS Price: 650
Sorted Books by Price:
DSinC++ (400)
CppPrimer (450)
CleanCode (550)
AlgoCLRS (650)
```
---


# Program 5: Employee Structure

### ✅ Student’s Task

1. **Define an `Employee` struct**  
   The struct should include the following members:  
   - `id` : Employee ID  
   - `name` : Employee name  
   - `department` : Department name  
   - `salary` : Employee salary  

2. **Implement `processInput()`**  
   - Read all employee details from a file.  
   - Populate an array or list of `Employee` structs.  

3. **Implement `performOperations()`**  
   - **Calculate** department-wise total salary  
   - **Find** the highest-paid employee  
   - **Sort** employees by salary in descending order and display

```
Input : 

5
201 Alice IT 50000
202 Bob HR 40000
203 Charlie IT 60000
204 David Sales 35000
205 Eve HR 45000
```

```
Output : 

Department-wise Salary:
IT: 110000
HR: 85000
Sales: 35000
Highest Paid: Charlie (60000)
Sorted by Salary:
Charlie 60000
Alice 50000
Eve 45000
Bob 40000
David 35000
```
---


# Program 6: Cricketer Structure

### ✅ Student’s Task

1. **Define a `Cricketer` struct**  
   The struct should include the following members:  
   - `name` : Player's name  
   - `matches` : Number of matches played  
   - `runs[]` : Array of runs scored in each match  

2. **Implement `processInput()`**  
   - Read all player data from a file.  
   - Populate an array or list of `Cricketer` structs.  

3. **Implement `performOperations()`**  
   - **Calculate** each player’s average runs  
   - **Find** the player with the highest average runs
   - Output the results in the **given format**, also mentioned in the program as comment.
```
Input :

3
Virat 5 45 67 89 23 56
Rohit 5 120 85 45 70 90
Dhoni 5 55 60 65 70 75
```

```
Output : 

Virat Avg: 56
Rohit Avg: 82
Dhoni Avg: 65
Best Player: Rohit with Avg 82
```
---
