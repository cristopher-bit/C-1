#include <iostream>
#include <string>
using namespace std;

// Student Structure
struct Student {
    int rollNo;
    string name;
};

// Function to Accept Student Data
void AcceptStudents(Student* students, int size) {
    cout << "Enter details of " << size << " students:\n";
    for (int i = 0; i < size; i++) {
        cout << "Student " << i + 1 << " Roll No: ";
        cin >> students[i].rollNo;
        cout << "Student " << i + 1 << " Name: ";
        cin.ignore();
        getline(cin, students[i].name);
    }
}

// Function to Display Student Data
void DisplayStudents(const Student* students, int size) {
    cout << "\nStudent Details:\n";
    for (int i = 0; i < size; i++) {
        cout << "Roll No: " << students[i].rollNo << ", Name: " << students[i].name << endl;
    }
}

// Function to Sort Students by Roll No (Bubble Sort)
void SortStudents(Student* students, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].rollNo > students[j + 1].rollNo) {
                swap(students[j], students[j + 1]);
            }
        }
    }
}

// Function to Accept Characters and Display as String
void AcceptAndDisplayString() {
    int size;
    cout << "Enter number of characters: ";
    cin >> size;
    char* arr = new char[size + 1];

    cout << "Enter characters: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    arr[size] = '\0';  // Null-terminate the string

    cout << "Entered String: " << arr << endl;
    delete[] arr;
}

// Function to Find Average of Numbers
void FindAverage() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    double* arr = new double[size];

    double sum = 0;
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Average: " << sum / size << endl;
    delete[] arr;
}

// Function to Multiply Numbers by 2
void MultiplyByTwo() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int* arr = new int[size];

    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Numbers after multiplying by 2: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] * 2 << " ";
    }
    cout << endl;
    delete[] arr;
}

int main() {
    int choice;
    
    do {
        cout << "\nMenu:";
        cout << "\n1. Accept & Sort Students";
        cout << "\n2. Accept Characters & Print as String";
        cout << "\n3. Find Average of Numbers";
        cout << "\n4. Multiply Numbers by 2";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int size;
                cout << "Enter number of students: ";
                cin >> size;
                Student* students = new Student[size];

                AcceptStudents(students, size);
                SortStudents(students, size);
                DisplayStudents(students, size);

                delete[] students;
                break;
            }
            case 2:
                AcceptAndDisplayString();
                break;
            case 3:
                FindAverage();
                break;
            case 4:
                MultiplyByTwo();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
📌 Explanation
Student Structure

Stores rollNo and name for students.
Student Management

AcceptStudents() → Reads student records.
DisplayStudents() → Displays student records.
SortStudents() → Sorts students by rollNo (Bubble Sort).
Other Functionalities

AcceptAndDisplayString() → Accepts n characters and prints as a string.
FindAverage() → Computes the average of n numbers.
MultiplyByTwo() → Multiplies n numbers by 2 and displays them.
Menu-Driven Program

Uses a do-while loop for repeated execution until the user exits.
📌 Sample Output
mathematica
Copy
Edit
Menu:
1. Accept & Sort Students
2. Accept Characters & Print as String
3. Find Average of Numbers
4. Multiply Numbers by 2
5. Exit
Enter your choice: 1
Enter number of students: 3
Enter details of 3 students:
Student 1 Roll No: 103
Student 1 Name: Alice
Student 2 Roll No: 101
Student 2 Name: Bob
Student 3 Roll No: 102
Student 3 Name: Charlie

Student Details:
Roll No: 101, Name: Bob
Roll No: 102, Name: Charlie
Roll No: 103, Name: Alice

Menu:
1. Accept & Sort Students
2. Accept Characters & Print as String
3. Find Average of Numbers
4. Multiply Numbers by 2
5. Exit
Enter your choice: 2
Enter number of characters: 5
Enter characters: H e l l o
Entered String: Hello

Menu:
1. Accept & Sort Students
2. Accept Characters & Print as String
3. Find Average of Numbers
4. Multiply Numbers by 2
5. Exit
Enter your choice: 3
Enter number of elements: 4
Enter 4 numbers: 10 20 30 40
Average: 25

Menu:
1. Accept & Sort Students
2. Accept Characters & Print as String
3. Find Average of Numbers
4. Multiply Numbers by 2
5. Exit
Enter your choice: 4
Enter number of elements: 3
Enter 3 numbers: 5 10 15
Numbers after multiplying by 2: 10 20 30

Menu:
1. Accept & Sort Students
2. Accept Characters & Print as String
3. Find Average of Numbers
4. Multiply Numbers by 2
5. Exit
Enter your choice: 5
Exiting...
✅ Key Concepts Used
✔ Dynamic Memory Allocation (new and delete)
✔ Sorting (Bubble Sort on Student Data)
✔ Character Array Handling (char*)
✔ Mathematical Operations (Average & Multiplication)
✔ Menu-Driven Approach with do-while and switch-case