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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0) return head;

        // Step 1: Find the length of the list
        ListNode* temp = head;
        int n = 1;
        while (temp->next != NULL) {
            temp = temp->next;
            n++;
        }

        // Step 2: Connect the last node to the head, forming a circular list
        temp->next = head;

        // Step 3: Find the new tail and new head
        k = k % n;
        if (k == 0) {
            temp->next = NULL;
            return head;
        }

        // The new tail will be at position (n - k - 1)
        int newTailPos = n - k - 1;
        ListNode* newTail = head;
        for (int i = 0; i < newTailPos; i++) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;
        newTail->next = NULL;  // Break the circular list to get the new list

        return newHead;

        // if(head == NULL||head->next == NULL) return head;
        // for(int i=0;i<k;i++) {
        //     ListNode* temp = head;
        //     while(temp->next->next != NULL) temp = temp->next;
        //     ListNode* end = temp->next;
        //     temp->next = NULL;
        //     end->next = head;
        //     head = end;
        // }
        // return head;
    }
};