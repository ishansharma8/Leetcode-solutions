class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
      
      while(temp!=NULL && temp->next!=NULL){
        if(temp->next->val==temp->val){
          temp->next=temp->next->next;
        }
        else{
          temp=temp->next; 
        }
      }
      
      return head;
    }
};