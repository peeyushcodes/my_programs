#include <iostream>
using namespace std;

typedef struct node {
    int data;
    struct node* next;
} Node;

Node* createNode(int input) {
    Node* newNode = new Node;
    newNode->data = input;
    newNode->next = NULL;
    return newNode;
}

void insertBeginning(Node*& head, int val) {
    Node* newNode = createNode(val);
    newNode->next = head;
    head = newNode;
}

void printList(Node* head) {
    Node* temp = head;

    if (head == NULL) {
        cout << "List is Empty" << endl;
        return;
    }

    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

void insertEnd(Node*& head, int val) {
    if (head == NULL) {
        Node* newNode = createNode(val);
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = createNode(val);
    return;
}

void deleteFirst(Node*& head) {
    if (head == NULL) {
        cout << "List is Empty" << endl;
        return;
    }

    cout << "Deleting : " << head->data << endl;

    Node* deleted = head;
    head = head->next;

    delete deleted;
}

void deleteLast(Node*& head) {
    if (head == NULL) {
        cout << "List is Empty" << endl;
        return;
    }

    if (head->next == NULL) {
        Node* deleted = head;

        cout << "Deleting : " << head->data << endl;

        head = NULL;
        delete deleted;
        return;
    }

    Node* temp = head;

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    Node* deleted = temp->next;

    cout << "Deleting : " << temp->next->data << endl;

    temp->next = NULL;

    delete deleted;
}

void insertAtPos(Node*& head, int val, int pos) {
    if (pos < 1) {
        cout << "Invalid Position : Position too Low within the Linked List"
             << endl;
        return;
    }

    if (pos == 1) {
        insertBeginning(head, val);
        return;
    }

    Node* temp = head;
    int counter = 1;

    while (counter < pos - 1 && temp != NULL) {
        temp = temp->next;
        counter++;
    }

    if (temp == NULL) {
        cout << "Invalid Position : Position too high within the Linked List"
             << endl;
        return;
    }

    Node* oldNode = temp->next;
    temp->next = createNode(val);
    temp->next->next = oldNode;
}

void deleteAtPos(Node*& head, int pos) {
    if (pos < 1) {
        cout << "Invalid Position : Position does not exist" << endl;
        return;
    }

    if (pos == 1) {
        deleteFirst(head);
        return;
    }

    int counter = 1;
    Node* temp = head;

    while (counter < pos - 1 && temp != NULL) {
        temp = temp->next;
        counter++;
    }

    if (temp == NULL || temp->next == NULL) {
        cout << "Invalid Position : Position does not exist" << endl;
        return;
    }

    Node* deleted = temp->next;

    cout << "Deleting : " << temp->next->data << endl;

    temp->next = temp->next->next;

    delete deleted;
}

int main() {
    Node* head = NULL;

    insertBeginning(head, 10);
    insertBeginning(head, 20);
    insertBeginning(head, 30);

    insertAtPos(head, 23, 4);
    deleteAtPos(head, 2);

    // insertEnd(head, 25);
    // deleteFirst(head);
    // deleteLast(head);
    // printList(head);

    printList(head);

    cout << "\n<------------------------------Code Complete------------------------------>\n";

    return 0;
}