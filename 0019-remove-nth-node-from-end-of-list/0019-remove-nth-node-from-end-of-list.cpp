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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    //     if(head==NULL){
    //         return NULL;
    //     }
    //     int count=0;
    //     ListNode* temp=head;
    //     while(temp){
    //         temp=temp->next;
    //         count++;
    //     }
    //     if (count == n) {
    //     ListNode* newhead = head->next;
    //     delete (head);
    //     return newhead;
    // }
    //     int res= count-n;
    //     temp=head;

    //     while(res){
    //         res--;
    //         if(res==0) break;
    //         temp=temp->next;
    //     }
    //     ListNode* deletenode = temp->next;
    //     temp->next=temp->next->next;
    //     delete (deletenode);
    //     return head;

    ListNode* fast=head;
    ListNode* slow=head;
    for(int i=0;i<n;i++){
        fast=fast->next;
    }
    if(fast==NULL){
        return head->next;
    }
    while(fast->next){
        fast=fast->next;
        slow=slow->next;
    }
    ListNode* delnode=slow->next;
    slow->next=slow->next->next;
    delete(delnode);
    return head;
    }
};