#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// নোড স্ট্রাকচার তৈরি
class Node {
public:
	int data; // ডাটা ধারণ করার জন্য
	Node *next; // পরবর্তী নোডের পয়েন্টার

	Node(int data) {
		this->data = data;
		next = NULL;
	}
};

void printList(Node* n) {
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

int main() {
    Node *head = new Node(5);
    cout << head->data << "\n";
    cout << head->next << "\n";

    // লিঙ্কড লিস্ট প্রিন্ট করা
    printList(head);

    return 0;
}
