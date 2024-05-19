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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)return NULL;
        
        ListNode* temp=head;
        int size=1;
        
        while(temp->next!=NULL){
            temp=temp->next;
            size++;
        }
       
        if(size==1){
            return NULL;
        }
        
        if(size==n){
            head=head->next;
            return head;
            //eg -[1,2] ,n=2 means delete 2nd index from last ,i.e delete head
        }
        
        ListNode*temp2=head;
        for(int i=0;i<size-n-1;i++){
            temp2=temp2->next;
        }
        temp2->next=temp2->next->next;
        return head;
    }
};

