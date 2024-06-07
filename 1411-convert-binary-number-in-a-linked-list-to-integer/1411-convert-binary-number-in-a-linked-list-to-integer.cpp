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
    int getDecimalValue(ListNode* head) {
    //     ListNode* temp=head;
    //     int count=0;
    //     int dec=0;
    //     if(head==NULL){
    //         return 0;
    //     }
    //     while(temp){
    //         temp=temp->next;
    //         count++;
    //     }
    //     temp=head;
    //     while(temp){
    //         for(int i=0;i<count;i++){
    //             dec+= (2^(count-1-i)) * temp->val;
    //             temp=temp->next; 
    //         }       
    //     }
    //     return dec;
    // }
    int dec=0;
    while(head){
        dec=dec*2 + head->val;
        head=head->next;
    }
    return dec;
    }
};