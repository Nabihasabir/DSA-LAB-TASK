#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insert(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void displayFirst() {
    cout << head->data << endl;
}

void displayLast() {
    Node* temp = head;
    while (temp->next) temp = temp->next;
    cout << temp->data << endl;
}

int main() {
    insert(10);
    insert(20);
    insert(30);

    cout << "First node: ";
    displayFirst();

    cout << "Last node: ";
    displayLast();

    return 0;
}

