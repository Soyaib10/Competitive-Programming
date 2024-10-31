#include<bits/stdc++.h>
#define ll long long int
using namespace std;

class Node {
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data) {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

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

void insertAtBegining(Node* &head, int data) {
    Node *temp = new Node(data);
    if (head == NULL) {
        head = temp;
    } else {
        temp->next = head;
        head->prev = temp;  
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
		temp->prev = tail;
	}
}

void insertAtPosition(Node* &head, int data, int pos) {
	Node *temp = new Node(data);
	if (pos == 1) {
		temp->next = head;
		if (head != NULL) head->prev = temp;
		head = temp;
		return;
	}

	Node *cur = head;
	for (int i = 1; i < pos - 1; i++) {
		if (cur == NULL) return;
		cur = cur->next;
	}

	temp->next = cur->next;
    if (cur->next != NULL) cur->next->prev = temp;
    cur->next = temp;
    temp->prev = cur;
}

void deleteFromBeginning(Node* &head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    if (head != NULL) {
        head->prev = NULL;
    }
    delete temp;
}

void deleteFromEnd(Node* &head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node *tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    tail->prev->next = NULL;
    delete tail;
}

void deleteFromPosition(Node* &head, int position) {
    if (head == NULL || position <= 0) {
        cout << "Invalid position or list is empty" << endl;
        return;
    }
    if (position == 1) {
        deleteFromBeginning(head);
        return;
    }

    Node *temp = head;
    for (int i = 1; i < position; i++) {
        if (temp == NULL) {
            cout << "Position out of bounds" << endl;
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }

    delete temp;
}




int main() {
    Node *head = NULL;
    insertAtBegining(head, 3);  
    insertAtEnd(head, 2);
    insertAtPosition(head, 4, 2);
    display(head);
    freeMemory(head);
    return 0;
}
