#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;        // Data stored in the node
    Node* next;      // Pointer to the next node
};

// Function to print the linked list
void printList(Node* n) {
    while (n != NULL) {
        cout << n->data << " -> ";
        n = n->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Creating nodes manually
    Node* head = new Node();    // First node
    Node* second = new Node();  // Second node
    Node* third = new Node();   // Third node

    // Assigning data and linking nodes
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    // Print the list
    printList(head);

    return 0;
}
