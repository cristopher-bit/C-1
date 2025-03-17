#include <iostream>
using namespace std;

// Student Structure
struct Student {
    int rollNo;
    string name;
};

// Function to Accept Student Data
void Accept(Student students[], int size) {
    cout << "Enter details of " << size << " students:\n";
    for (int i = 0; i < size; i++) {
        cout << "Student " << i + 1 << " Roll No: ";
        cin >> students[i].rollNo;
        cout << "Student " << i + 1 << " Name: ";
        cin.ignore(); // Ignore newline character left by cin
        getline(cin, students[i].name);
    }
}

// Function to Display Student Data
void Display(const Student students[], int size) {
    cout << "\nStudent Details:\n";
    for (int i = 0; i < size; i++) {
        cout << "Roll No: " << students[i].rollNo << ", Name: " << students[i].name << endl;
    }
}

// Function to Sort Students by Roll No (Bubble Sort)
void SortByRollNo(Student students[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].rollNo > students[j + 1].rollNo) {
                // Swap Students
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;
    cout << "Enter number of students: ";
    cin >> size;

    Student students[size];

    // Accept student details
    Accept(students, size);

    // Display original student list
    Display(students, size);

    // Sort students by roll number
    SortByRollNo(students, size);

    // Display sorted student list
    cout << "\nAfter Sorting by Roll No:\n";
    Display(students, size);

    return 0;
}
📌 Explanation
struct Student

Contains rollNo and name.
Accept(Student[], int)

Reads student details from the user.
Display(Student[], int)

Displays the list of students.
SortByRollNo(Student[], int)

Uses Bubble Sort (manual sorting) to arrange students by rollNo.
Swaps adjacent elements if they are out of order.
Main Function

Reads number of students.
Calls Accept(), Display(), SortByRollNo(), and Display() to show sorted output.
📌 Sample Output
yaml
Copy
Edit
Enter number of students: 3
Enter details of 3 students:
Student 1 Roll No: 102
Student 1 Name: Alice
Student 2 Roll No: 101
Student 2 Name: Bob
Student 3 Roll No: 103
Student 3 Name: Charlie

Student Details:
Roll No: 102, Name: Alice
Roll No: 101, Name: Bob
Roll No: 103, Name: Charlie

After Sorting by Roll No:
Roll No: 101, Name: Bob
Roll No: 102, Name: Alice
Roll No: 103, Name: Charlie
✅ Key Concepts Used
✔ struct for Student Data
✔ Array of Students
✔ Accept & Display Functions
✔ Manual Sorting (Bubble Sort)
✔ Efficient and Simple Implementation