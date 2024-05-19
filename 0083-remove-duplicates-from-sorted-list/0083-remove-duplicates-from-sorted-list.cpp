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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)return NULL;
        ListNode* tail=head;
        while(tail->next!=NULL){
                if(tail->val ==tail->next->val){
                    tail->next=tail->next->next;
                    ///dont move tail forware if >2 duplicates like [1,1,1]
                }
                else
                {
                tail=tail->next;
                };
            
            if(tail==NULL)return head;//for handing  [1,1,2,3,3]
            
        }
        return head;
    }
};