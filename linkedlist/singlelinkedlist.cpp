#include <iostream>
#include <string>
using namespace std;

// Structure for a student node
struct Student {
    int id;
    string name;
    float grade;
    Student* next;
} *head = NULL;


// Function to create a new student node
Student* createStudent(int id, string name, float grade) {
    Student* newStudent = new Student();
    newStudent->id = id;
    newStudent->name = name;
    newStudent->grade = grade;
    newStudent->next = NULL;
    return newStudent;
}

// Function to insert a student at the end
void insertStudent(Student*& head, int id, string name, float grade) {
    Student* newStudent = createStudent(id, name, grade);

    if (head == NULL) {
        head = newStudent;
    } else {
        Student* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newStudent;
    }
}

// Function to display the student list
void displayStudents(Student* head) {
    Student* temp = head;
    while (temp != NULL) {
        cout << "ID: " << temp->id
             << ", Name: " << temp->name
             << ", Grade: " << temp->grade << endl;
        temp = temp->next;
    }
}

int main() {
   
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int id;
        string name;
        float grade;

        cout << "\nEnter details for student " << i + 1 << ":" << endl;
        cout << "ID: ";
        cin >> id;
        cin.ignore();  // clear newline character after integer input
        cout << "Name: ";
        getline(cin, name);
        cout << "Grade: ";
        cin >> grade;

        insertStudent(head, id, name, grade);
    }

    cout << "\nStudent List:\n";
    displayStudents(head);

    return 0;
}
