// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:

//     ListNode* getkth(ListNode* temp,int k){
//         k-=1;
//         while(temp!=NULL && k>0){
//             k--;
//             temp=temp->next;
//         }
//         return temp;
//     }

//     ListNode* reverselist(ListNode *head){
//         ListNode* temp = head;
//         ListNode* prev = NULL;
//         while(temp != NULL){
//             ListNode* front = temp->next;
//             temp->next = prev;
//             prev = temp;
//             temp = front; 
//         }
//         return prev;  
//     }


//     ListNode* reverseKGroup(ListNode* head, int k) {
//         if (head == nullptr || k == 1) return head;
//         ListNode* temp=head;
//         ListNode* prev=NULL;
//         while(temp!=NULL){
//             ListNode* kthnode=getkth(temp,k);
//             if(kthnode==NULL){
//                 if(prev){
//                     prev->next=temp;
//                     break;
//                 }
//             }
//             ListNode* nextnode=kthnode->next;
//             kthnode->next-NULL;
//             reverselist(temp);
//             if(temp==head){
//                 head=kthnode;
//             }else{
//                 prev->next=kthnode;
//             }
//             prev=temp;
//             temp=nextnode;
//         }
//         return head;
//     }
// };

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

    ListNode* getkth(ListNode* temp, int k) {
        while (temp != nullptr && k > 1) {
            temp = temp->next;
            k--;
        }
        return temp;
    }

    ListNode* reverselist(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k == 1) return head;
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* groupPrev = dummy;
        
        while (true) {
            ListNode* kth = getkth(groupPrev->next, k);
            if (kth == nullptr) break;
            
            ListNode* groupNext = kth->next;
            kth->next = nullptr;
            
            ListNode* groupStart = groupPrev->next;
            groupPrev->next = reverselist(groupStart);
            groupStart->next = groupNext;
            
            groupPrev = groupStart;
        }
        
        return dummy->next;
    }
};
