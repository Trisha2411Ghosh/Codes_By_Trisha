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
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        ListNode* node=head->next;
        while(node!=NULL){
            int sum = 0;
            while(node->val!=0){
                sum+=node->val;
                node=node->next;
            }
            current->next=new ListNode(sum);
            current=current->next;
            node=node->next;
        }
        
        return dummy->next;
    }
};