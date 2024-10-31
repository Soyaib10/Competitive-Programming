// without stack
void reverseLinkedList(Node* &head) {
	Node *cur = head, *prev = NULL, *next = NULL;
	while (cur != NULL) {
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	return prev;
}

// with stack
Node* reverseLinkedList(Node* &head) {
	Node *temp = head;
	stack<int> st;
	while (temp != NULL) {
		st.push(temp->data);
		temp = temp->next;
	}

	temp = head;
	while (temp != NULL) {
		temp->data = st.top();
		st.pop();
		temp = temp->next;
	}
	return head;
}