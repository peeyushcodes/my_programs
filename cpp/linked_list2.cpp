#include <iostream>
using namespace std;

class node {

public:
  int data;
  node *next;

  node(int val) {
    data = val;
    next = NULL;
  }
};

class list {
  node *head;
  node *tail;

public:
  list() { head = tail = NULL; }

  void push_front(int val) {
    node *newNode = new node(val); // dynamic
    // node newNode(val); // static
    if (head == NULL) {
      head = tail = newNode;
      return;
    } else {
      newNode->next = head;
      head = newNode;
    }
  }

  void push_back(int val) {
    node *newNode = new node(val);

    if (head == NULL) {
      head = tail = newNode;
    } else {
      tail->next = newNode;
      tail = newNode;
    }
  }
  void pop_front() {
    if (head == NULL) {
      cout << "LL is empty";
    } else {
      node *temp = head;
      head = head->next;
      temp->next = NULL;
      delete temp;
    }
  }

  void pop_back() {
    if (head == NULL) {
      cout << "LL is empty";
      return;
    }
    node *temp = head;
    while (temp->next != tail) {
      temp = temp->next;
    }
    temp->next = NULL;
    delete tail;
    tail = temp;
  }

  void insert(int val, int pos) {
    if (pos < 0) {
      cout << "Invalid Position \n";
      return;
    }
    if (pos == 0) {
      push_front(val);
      return;
    }
    node *temp = head;
    for (int i = 0; i < pos - 1; i++) {
      if (temp == NULL) {
        cout << "Invalid pos\n";
        return;
      }
      temp = temp->next;
    }
    node *newNode = new node(val);
    newNode->next = temp->next;
    temp->next = newNode;
  }
  void printLL() {
    node *temp = head;

    while (temp != NULL) {
      cout << temp->data << "->";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }
  int search(int key) {
    node *temp = head;
    int idx = 0;

    while (temp != NULL) {
      if (temp->data == key) {
        return idx;
      }
      temp = temp->next;
      idx++;
    }
    return -1;
  }
};
int main() {
  list l1;
  l1.push_front(1);
  l1.printLL();
  l1.push_front(2);
  l1.printLL();
  l1.push_front(3);
  l1.printLL();
  l1.push_back(4);
  l1.printLL();
  l1.insert(5, 1);
  l1.printLL();
  l1.pop_front();
  l1.printLL();
  l1.pop_front();
  l1.printLL();
  l1.pop_back();
  l1.printLL();
  cout << l1.search(1);
  return 0;
}