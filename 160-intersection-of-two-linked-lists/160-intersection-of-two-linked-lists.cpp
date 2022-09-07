/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      ListNode*temp=headA;
      int length=1;
      unordered_set<ListNode*>s;
        while(temp!=NULL){
          s.insert(temp);
          temp=temp->next;
        }
      
      ListNode*temp2=headB;
      while(temp2!=NULL){
          int s1=s.size();     //cout<<s1<<" ";
          s.insert(temp2);
          int s2=s.size();     //cout<<s2<<endl;
          
          if(s1==s2){
            return temp2;
          }
        temp2=temp2->next;
        }
      
      
      return NULL;
    }
};