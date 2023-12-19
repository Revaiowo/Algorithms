#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

void deleteNode(Node* &head, int pos){

    if (head == NULL){
        cout<<"List is empty can't delete.";
        return;
    }

    Node* current = head;
    Node* deletedNode;

    for (int i=1; i<pos-1; i++){
        current = current->next;
        deletedNode = current->next;
    }
    current->next = deletedNode->next;
}

void insert(Node* &head, int value, int pos){

    Node* newNode = new Node(value);

    if (pos == 1){
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* current = head;
    for (int i=1; i<pos-1; i++){
        current = current->next;
    }

    newNode->next = current->next;
    current->next = newNode;
    
}

void insertAtEnd(Node* &head, int value){

    Node* newNode = new Node(value);

    if (head == NULL){
        head = newNode;
        return;
    }

    Node* current = head;

    while(current->next != NULL){
        current = current->next;
    }
    current->next = newNode;
}

void insertAtBeginning(Node* &head, int value){

    Node* newNode = new Node(value);

    if (head == NULL){
        head = newNode;
        return;
    }
    Node* current = head;

    head = newNode;
    newNode->next = current;
}

void display(Node* head){

    if (head == NULL){
        cout <<"Linked list is empty" <<endl;
        return;
    }

    Node* current = head;

    while (current != NULL){
        
        cout<<current->data << "->";
        current = current->next;
    }
    cout<<endl;
}

int main(){

    Node* head = NULL;

    insertAtEnd(head, 1);
    insertAtEnd(head, 8);
    insertAtEnd(head, 6);
    insertAtBeginning(head, 22);
    insert(head, 111, 3);   

    display(head);

    deleteNode(head, 3);

    display(head);


    return 0;
}