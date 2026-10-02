#include <iostream>
using namespace std;

class node {

    public: 
    int data;
    node* next;

    node ( int val ){
        data = val;
        next = NULL;

    }
};

class list {
    node* head;
    node* tail;
    node* newNode;
    public: 
    list(){
        head = tail = newNode;
    }

    void push_front(int val){
        node* newNode = new node(val);
        if( head == NULL){
            head = tail = newNode;
            return;

        }else {
            newNode ->next = head;
            head = newNode;
        }


    }
};

int main (){

    list ll;
     ll.push_front(1);

    return 0;
}