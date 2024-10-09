#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// নোড স্ট্রাকচার তৈরি
class Node {
public:
	int data; // ডাটা ধারণ করার জন্য
	Node *next; // পরবর্তী নোডের পয়েন্টার
};

void printList(Node* n) {
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

int main() {
    // প্রথম নোড তৈরি
    Node* head = new Node(); // মেমরি এলোকেট করে প্রথম নোড তৈরি
    head->data = 10; // প্রথম নোডের ডাটা
    head->next = NULL; // লিস্টের শেষ তাই পরবর্তী নোড নেই

    // দ্বিতীয় নোড তৈরি
    Node* second = new Node(); 
    second->data = 20;
    second->next = NULL;

    // তৃতীয় নোড তৈরি
    Node* third = new Node(); 
    third->data = 30;
    third->next = NULL;

    // প্রথম নোডের পরবর্তী হিসেবে দ্বিতীয় নোড যুক্ত করা
    head->next = second;
    // দ্বিতীয় নোডের পরবর্তী হিসেবে তৃতীয় নোড যুক্ত করা
    second->next = third;


    // লিঙ্কড লিস্ট প্রিন্ট করা
    printList(head);

    return 0;
}
