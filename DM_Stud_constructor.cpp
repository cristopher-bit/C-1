#include <iostream>
using namespace std;

class Student {
private:
    const int rollNo;  // Const Data Member
    string name;
    
public:
    // Default Constructor
    Student() : rollNo(0) {
        name = "Unknown";
        cout << "Default Constructor Called | Object Address: " << this << endl;
    }

    // Parameterized Constructor with Initialization List
    Student(int r, string n) : rollNo(r), name(n) {
        cout << "Parameterized Constructor Called | Object Address: " << this << endl;
    }

    // Accept Function
    void Accept() {
        cout << "Enter Roll No: ";
        int r;
        cin >> r;
        *(int*)&rollNo = r;  // Hack to modify const data member for demonstration (Not Recommended)
        
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
    }

    // Display Function
    void Display() const {
        cout << "Roll No: " << rollNo << ", Name: " << name << " | Object Address: " << this << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor Called for Roll No: " << rollNo << " | Object Address: " << this << endl;
    }
};

int main() {
    cout << "\n--- Creating Single Object Dynamically ---\n";
    Student* s1 = new Student(101, "Alice");
    s1->Display();
    delete s1;  // Destructor Called

    cout << "\n--- Creating Array of Objects ---\n";
    int size = 3;
    Student* sArray = new Student[size]; // Calls Default Constructor multiple times
    
    for (int i = 0; i < size; i++) {
        sArray[i].Accept();
    }

    cout << "\n--- Displaying Array of Students ---\n";
    for (int i = 0; i < size; i++) {
        sArray[i].Display();
    }

    delete[] sArray;  // Calls Destructor for each object

    return 0;
}
📌 Key Features & Explanation
Constructors

Default Constructor initializes rollNo = 0, name = "Unknown", and prints this pointer.
Parameterized Constructor initializes rollNo and name with an initialization list.
Dynamic Memory Allocation

A single student object (s1) is created using new.
An array of students (sArray) is created dynamically, triggering multiple default constructor calls.
Const Data Member Initialization

rollNo is constant, so it is initialized using initializer list.
(For demo purposes, we use a hack to modify it in Accept(), but this is not recommended in real scenarios.)
Checking this Pointer

Each function prints this to verify it points to the invoking object.
Destructor

Automatically called when delete is used.
Helps track object destruction.
📌 Sample Output
pgsql
Copy
Edit
--- Creating Single Object Dynamically ---
Parameterized Constructor Called | Object Address: 0x564da1746eb0
Roll No: 101, Name: Alice | Object Address: 0x564da1746eb0
Destructor Called for Roll No: 101 | Object Address: 0x564da1746eb0

--- Creating Array of Objects ---
Default Constructor Called | Object Address: 0x564da1746ec0
Default Constructor Called | Object Address: 0x564da1746ed0
Default Constructor Called | Object Address: 0x564da1746ee0
Enter Roll No: 102
Enter Name: Bob
Enter Roll No: 103
Enter Name: Charlie
Enter Roll No: 104
Enter Name: David

--- Displaying Array of Students ---
Roll No: 102, Name: Bob | Object Address: 0x564da1746ec0
Roll No: 103, Name: Charlie | Object Address: 0x564da1746ed0
Roll No: 104, Name: David | Object Address: 0x564da1746ee0

Destructor Called for Roll No: 104 | Object Address: 0x564da1746ee0
Destructor Called for Roll No: 103 | Object Address: 0x564da1746ed0
Destructor Called for Roll No: 102 | Object Address: 0x564da1746ec0
✅ Concepts Used
✔ Constructor Overloading (Default & Parameterized)
✔ Initialization List for const Data Members
✔ Dynamic Object Creation (new Operator)
✔ Array of Objects & Multiple Constructor Calls
✔ Printing this Pointer for Object Address
✔ Destructor for Memory Cleanup