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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* current = head->next; 
        ListNode* prev = head;
        int sum = 0;
        while (current != NULL) {
            if (current->val == 0) {
                if (sum > 0) {
                    prev->next = new ListNode(sum);
                    prev = prev->next;
                    sum = 0;
                }
            } else {
                sum += current->val;
            }
            current = current->next;
        }
        if (prev !=NULL) {
            prev->next = NULL;
        }
        return head->next; 
        // ListNode* dummy = new ListNode(0);
        // ListNode* current = dummy;
        // ListNode* node=head->next;
        // while(node!=NULL){
        //     int sum = 0;
        //     while(node->val!=0){
        //         sum+=node->val;
        //         node=node->next;
        //     }
        //     current->next=new ListNode(sum);
        //     current=current->next;
        //     node=node->next;
        // }
        
        // return dummy->next;
    }
};