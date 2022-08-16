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
    ListNode* swapPairs(ListNode* head) {
      ListNode*temp=head;
      ListNode*prev=NULL;
      
      // && temp->next->next!=NULL
      
      while(temp!=NULL && temp->next!=NULL ){
        ListNode*d1=temp; //1 ,3
        ListNode*d2=d1->next;//2 ,4
        temp=d2->next;//3 ,NULL      
        d2->next=d1;
        d1->next=temp;
        
        if(prev==NULL){
          head=d2;
          prev=d1;
        }
        else{
          prev->next=d2;
          prev=d1;
        }
      }
        
      return head;
    }
};