#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

void insertAtEnd(Node* &tail, int data) {
	Node *temp = new Node(data);
	if (tail == NULL) {
		tail = temp;
	} else {
		tail->next = temp;
		tail = temp;
	}
}

Node* arrayToLinkedList(int a[], int size) {
	if (size == 0) return NULL;
	Node *head = new Node(a[0]);
	Node *tail = head;
	for (int i = 1; i < size; i++) {
		insertAtEnd(tail, a[i]);
	}
	return head;
}

void display(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
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

    Node* head = arrayToLinkedList(arr, size);
    display(head);
    freeMemory(head);

    return 0;
}
