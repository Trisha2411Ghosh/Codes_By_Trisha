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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {      
    //     ListNode* p1 =list1;
    //     ListNode* prv1;
    //     ListNode* p2 =list1;
    //     ListNode* next1;
    //     int c1=0;
    //     while(p1!=NULL && c1==a){
    //         c1++;
    //         prv1=p1;
    //         p1=p1->next;
    //     }
    //     int c2=0;
    //     while(p2!=NULL && c2==b){
    //         c2++;
    //         p2=p2->next;
    //         next1=p2->next;
    //     }
    //     p2->next=NULL;

    //    ListNode* ptr1 = list2;
    //     while(ptr1->next!=NULL){
    //         ptr1=ptr1->next;
    //         // if(count>=a && count<=b){
    //         //     delete(ptr);
    //         // }
    //     }
    //     ptr1->next=next1;
    //     // prv1->next=list2;
    //     // ListNode* ptr2 = list1;
    //     // int count=0;
    //     // while(ptr2!=NULL && count>b){
    //     //     ptr2=ptr2->next;
    //     //     count++;
    //     //     // if(count>=a && count<=b){
    //     //     //     delete(ptr);
    //     //     // }
    //     // }
    //     //     ptr1->next=ptr2;  

    //     // ListNode* ptr3 = list1;
    //     // int count1=0;
    //     // while(ptr3->next!=NULL && count1<a){
    //     //     ptr3=ptr3->next;
    //     //     count1++;
    //     //     // if(count>=a && count<=b){
    //     //     //     delete(ptr);
    //     //     // }
    //     // }
    //     //     ptr3->next=list2; 
    //         return list1;   
    // }
        ListNode* ptr1 = list1;
        ListNode* ptr2 = list1;
        int count = 0;
        while (count < a-1){
            ptr1=ptr1->next;
            count++;
        }
        count = 0;
        while (count <= b) {
            ptr2 = ptr2->next;
            count++;
        }
        ListNode* ptr3 = list2;
        while (ptr3->next!=NULL) {
            ptr3 = ptr3->next;
        }
        ptr3->next = ptr2;
        ptr1->next = list2;
        return list1;
    }
};