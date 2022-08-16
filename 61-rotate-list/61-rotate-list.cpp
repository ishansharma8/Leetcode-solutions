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
      int len=1;
      if(head==NULL)return NULL;
      if(k==0)return head;
      ListNode*temp=head;
      
        while(temp->next!=NULL){
          len++;
          temp=temp->next;
        }
      
      temp->next=head;
      
      k=k%len;
      int req=len-k;
      while(req>1){
        head=head->next;
        req--;
      }
      
      ListNode*newhead=head->next;
      head->next=NULL;
      
      return newhead;
    }
};