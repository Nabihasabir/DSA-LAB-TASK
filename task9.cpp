#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head1 = NULL;
Node* head2 = NULL;

void insert(Node* &head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void display(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void merge() {
    Node* temp = head1;
    while (temp->next) temp = temp->next;
    temp->next = head2;
}

int main() {
    insert(head1, 10);
    insert(head1, 20);
    insert(head1, 30);

    insert(head2, 5);
    insert(head2, 15);
    insert(head2, 25);

    merge();

    display(head1);

    return 0;
}

