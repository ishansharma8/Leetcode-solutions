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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode* temp;
        int ans1=0;
        int ans2=0;
        
        if(list1==NULL && list2==NULL){
            return NULL;
        }
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        
        if(temp1->val<temp2->val){
            temp=temp1;
            temp1=temp1->next;
            ans1++;
        }
        else{
            temp=temp2;
            temp2=temp2->next;
            ans2++;
        }
        
        while(temp1!=NULL && temp2!=NULL){
        int diff1=abs((temp->val)-(temp1->val));
        int diff2=abs((temp->val)-(temp2->val));
        
        
        if(diff1<diff2){
            temp->next=temp1;
            temp=temp1;
            temp1=temp1->next;
        }
        else{
            temp->next=temp2;
            temp=temp2;
            temp2=temp2->next;
        }
        }
        if(temp2!=NULL){
            temp->next=temp2;
    
        }
        if(temp1!=NULL){
            temp->next=temp1;
        }
        
       
        if(ans1==1){
            return list1;
        }
        else{
            return list2;
        }
        return list1;
        
    }
};