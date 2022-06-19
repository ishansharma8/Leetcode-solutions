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
        ListNode* temp=head;
        if(head==NULL){
            return NULL;
        }
        int n=1;
        while(temp->next!=NULL){
            temp=temp->next;
            n++;
        }
        //temp=head;
        
//         while(temp->next!=NULL){
//             temp=temp->next;
            
//         }
        temp->next=head; 
        // cout<<temp->val;  5
        // cout<<temp->next->val; 1
        
        k=k%n;
        int req=n-k;
        while(req>1){
            head=head->next;
            req--;
        }
        ListNode* newhead=head->next;
        
        
        head->next=NULL;
        return newhead;
    }
};