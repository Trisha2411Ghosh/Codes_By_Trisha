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
    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next== NULL){
            return head;
        }
        ListNode* temp = NULL;
        while(head!=NULL){
            ListNode* next = head->next;
            head->next=temp;
            temp=head;
            head=next;
        }
        return temp;
    }
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return;
        }

        ListNode* fast=head;
        ListNode* slow = head;

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newhead = reverse(slow->next);
        slow->next=NULL;
        ListNode* first=head;
        ListNode* second=newhead;
        ListNode* f=NULL;
        ListNode* s=NULL;
        while(first!=NULL && second!= NULL){
            f=first->next;
            s=second->next;
            first->next=second;
            second->next=f;
            first=f;
            second=s;
            
        }
    }
        // ListNode* temp=head;
        // ListNode*prev;
        // ListNode*tmp;
        // while(temp->next!=NULL){
        //     prev=temp;
        //     temp=temp->next;
        //     tmp=head->next;
        //     head->next=temp;
        //     temp->next=tmp;
        //     tmp->next=prev;
        //  }
    //     tmp=head->next;
    //     head->next=temp->next;
    //     temp->next=tmp;
    //     tmp->next=prev;
    // }
};