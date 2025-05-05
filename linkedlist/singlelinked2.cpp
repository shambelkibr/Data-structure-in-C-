#include <iostream>
using namespace std;

void insertAtBeginning(Student*& head, int id, string name, float grade) {
    Student* newStudent = createStudent(id, name, grade);
    newStudent->next = head;
    head = newStudent;
}


void insertAfterID(Student* head, int targetID, int id, string name, float grade) {
    Student* temp = head;

    while (temp != NULL) {
        if (temp->id == targetID) {
            Student* newStudent = createStudent(id, name, grade);
            newStudent->next = temp->next;
            temp->next = newStudent;
            return;
        }
        temp = temp->next;
    }

    cout << "Target ID not found. Cannot insert.\n";
}



int main()
{
	// Inserting at beginning
insertAtBeginning(head, 999, "Beginner", 88.0);

// Inserting in the middle (after ID 1)
insertAfterID(head, 1, 888, "Mid Guy", 91.5);

// Deleting first node
deleteFromBeginning(head);

// Deleting by ID (middle)
deleteByID(head, 888);

// Deleting from end
deleteFromEnd(head);

cout << "\nAfter insertion and deletion:\n";
displayStudents(head);

	
	return 0;
}