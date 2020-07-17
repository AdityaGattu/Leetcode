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
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL || head->next==NULL){return head;}
        
        ListNode* newnode=reverseList(head->next); // traverse till last node and store pointer to new node(final head after reversing) ;
        
        head->next->next=head;  //if(head->next !=NULL reversing the direction of list) 
        head->next=NULL;        //for last node head->next must be null after reversing;
       
        return newnode;
    }
};
