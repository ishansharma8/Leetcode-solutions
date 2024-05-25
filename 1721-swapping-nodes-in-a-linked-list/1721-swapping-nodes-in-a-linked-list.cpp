class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*temp=head;
        ListNode*temp1=head;
        ListNode*temp2=head;    
        int length=1;
        
        while(temp->next!=NULL){
            if(temp->next!=NULL){
                temp=temp->next;
                length++;
            }
        }        
        
        int i=0;
        while(i<k-1){
            temp1=temp1->next;
            i++;
        }                 
        int val1=temp1->val;
        
        i=0;
        while(i<length-k){
            temp2=temp2->next;
            i++;
        }        
        int val2=temp2->val;

        swap(temp1->val,temp2->val);
        return head;
    }
};