#include <iostream>
#include <string>

using namespace std;

// Define a structure to represent a student
struct Student {
    string name;
    int rollNumber;
    double marksSubject1;
    double marksSubject2;
};

// Function to display information about a student
void displayStudentInfo(const Student& x) {
    cout << "Student Information:" << endl;
    cout << "Name: " << x.name << endl;
    cout << "Roll Number: " << x.rollNumber << endl;
    cout << "Marks in Subject 1: " << x.marksSubject1 << endl;
    cout << "Marks in Subject 2: " << x.marksSubject2 << endl;
}

int main() {
    // Declare a student using the Student structure
    Student student1;

    // Get user input for student1
    cout << "Enter Student Information:" << endl;
    cout << "Name: ";
    getline(cin, student1.name); // Using getline for input with spaces
    cout << "Roll Number: ";
    cin >> student1.rollNumber;
    cout << "Marks in Subject 1: ";
    cin >> student1.marksSubject1;
    cout << "Marks in Subject 2: ";
    cin >> student1.marksSubject2;

    // Display information about student1 using the displayStudentInfo function
    displayStudentInfo(student1);

    return 0; // Exit the program successfully
}

