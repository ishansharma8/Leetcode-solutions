class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow=head;
        ListNode* fast=head;
        
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        
        if(fast==NULL){
            ListNode* newhead=head->next;
            head->next=NULL;
            return newhead;
        }
        while(fast->next!=NULL){//while fast is not at tail
            slow=slow->next;
            fast=fast->next;
        }
        
        ListNode* tbl=slow->next;
        slow->next=tbl->next;
        tbl->next=NULL;
        return head;
    }
};