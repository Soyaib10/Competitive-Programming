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

void insertAtBegining(Node* &head, int data) {
	Node *temp = new Node(data);
	if (head == NULL) {
		head = temp;
	} else {
		temp->next = head;
		head = temp;
	}
}

void insertAtEnd(Node* &head, int data) {
	Node *temp = new Node(data);
	if (head == NULL) {
		head = temp;
	} else {
		Node *tail = head;
		while (tail->next != NULL) {
			tail = tail->next;
		}
		tail->next = temp;
	}
}

void insertAtPosition(Node* &head, int data, int position) {
	Node *temp1 = new Node(data);
	if (position == 1) {
		temp1->next = head;
		head = temp1; 
	}

	Node *temp2 = head;
	for (int i = 1; i < position - 1; i++) {
		if (temp2 == NULL) {
			return; // position out of bound
		}
		temp2 = temp2->next;
	}

	// insert at position
	temp1->next = temp2->next;
	temp2->next = temp1; 
}

void display(Node *head) {
	Node *temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
} 

void freeMemory(Node* &head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;  // মেমরি মুক্ত করা
    }
}

int main() {
	Node *head = NULL;
	insertAtBegining(head, 0);
	insertAtEnd(head, 10);
	insertAtPosition(head, 30, 2);
	display(head);
	freeMemory(head);
	return 0;
}