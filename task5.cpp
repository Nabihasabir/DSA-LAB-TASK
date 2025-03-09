#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head;

void insert(int data, int pos) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if (pos == 0) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* temp = head;
        for (int i = 0; i < pos - 1; i++) temp = temp->next;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void display() {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    head = NULL;
    insert(10, 0);
    insert(20, 1);
    insert(30, 2);
    insert(40, 1);

    display();

    return 0;
}
