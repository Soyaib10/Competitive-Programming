#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data) {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

void insertAtEnd(Node* &tail, int data) {
    Node *temp = new Node(data);
    if (tail == NULL) {
        tail = temp;
    } else {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

Node* arrayToDoublyLinkedList(int arr[], int size) {
    if (size == 0) return NULL;

    Node* head = new Node(arr[0]);
    Node* tail = head;

    for (int i = 1; i < size; i++) {
        insertAtEnd(tail, arr[i]);
    }
    return head;
}

void displayForward(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void displayBackward(Node *tail) {
    Node *temp = tail;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void freeMemory(Node* &head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    Node* head = arrayToDoublyLinkedList(arr, size);
    Node* tail = head;
    while (tail && tail->next != NULL) {
        tail = tail->next;
    }

    cout << "Forward: ";
    displayForward(head);

    cout << "Backward: ";
    displayBackward(tail);

    freeMemory(head);

    return 0;
}
