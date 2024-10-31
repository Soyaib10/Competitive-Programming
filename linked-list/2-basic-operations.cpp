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

void display(Node *head) {
	Node *temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";
}

void freeMemory(Node* &head) {
	Node* temp;
	while (head != NULL) {
		temp = head;
		head = head->next;
		delete temp;
	}
}

// -----------INSERT------------
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
	Node *temp = new Node(data);
	if (position == 1) {
		temp->next = head;
		head = temp;
	}

	Node *cur = head;
	for (int i = 1; i < position - 1; i++) {
		if (cur == NULL) {
			return; // position out of bound
		}
		cur = cur->next;
	}

	// insert at position
	temp->next = cur->next;
	cur->next = temp;
}

// ---------DELETE----------------
void deleteAtBegening(Node* &head) {
	if (head == NULL) return;
	Node *temp = head;
	head = head->next;
	delete(temp);
}

void deleteAtEnd(Node* &head) {
	if (head == NULL) return;
	if (head->next == NULL) { // if list has one element
		delete(head);
		head = NULL;
		return;
	}

	Node *temp = head;
	while (temp->next->next != NULL) {
		temp = temp->next;
	}
	delete(temp->next);
	temp->next = NULL;
}

void deleteAtPosition(Node* &head, int pos) {
	if (head == NULL) return;

	Node *temp = head;
	if (pos == 1) {
		head = head->next;
		delete(temp);
		return;
	}

	for (int i = 1; i < pos - 1; i++) {
		if (temp == NULL) {
			return;
		}
		temp = temp->next;
	}
	if (temp == NULL or temp->next == NULL) {
		return;
	}

	Node *cur = temp->next->next;
	delete temp->next;
	temp->next = cur;
}

int main() {
	Node *head = NULL;
	insertAtBegining(head, 0);
	insertAtEnd(head, 10);
	insertAtPosition(head, 30, 2);
	display(head);

	deleteAtEnd(head);
	display(head);

	deleteAtPosition(head, 2);
	display(head);

	freeMemory(head);
	return 0;
}