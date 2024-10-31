/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void insertAtEnd(ListNode* &tail, ListNode* &node) {
        tail->next = node;
        tail = tail->next;
        node = node->next;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        ListNode* head = NULL, tail = NULL;
        if (list1->val < list2->val) {
            head = tail = list1;
            list1 = list1->next;
        } else {
            head = tail = list2;
            list2 = list2->next;
        }

        while (list1 != NULL && list2 != NULL) {
            if (list1->val < list2->val) insertAtEnd(tail, list1);
            else insertAtEnd(tail, list2);
        }

        if (list1 != NULL) tail->next = list1;
        else if (list2 != NULL) tail->next = list2;
        return head;
    }
};