#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* reverseList(ListNode* head) {
    // Initialize pointers
    ListNode* prev = nullptr; // Previous node starts as NULL
    ListNode* next = nullptr; // Next node
    ListNode* curr = head;    // Current node starts at the head

    // Traverse the list
    while (curr != nullptr) {
        // Save the next node
        next = curr->next;

        // Reverse the link
        curr->next = prev;

        // Move pointers forward
        prev = curr; // Move prev to the current node
        curr = next; // Move curr to the next node
    }

    // prev is now the new head of the reversed list
    return prev;
}

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    
    cout << "Original List: ";
    printList(head);
    
    head = reverseList(head);
    
    cout << "Reversed List: ";
    printList(head);
    
    return 0;
}
/*class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // Initialize pointers
        ListNode* prev = nullptr; // Previous node starts as NULL
        ListNode* next = nullptr; // Next node
        ListNode* curr = head;    // Current node starts at the head

        // Traverse the list
        while (curr != nullptr) {
            // Save the next node
            next = curr->next;

            // Reverse the link
            curr->next = prev;

            // Move pointers forward
            prev = curr; // Move prev to the current node
            curr = next; // Move curr to the next node
        }

        // prev is now the new head of the reversed list
        return prev;
    }
};*/