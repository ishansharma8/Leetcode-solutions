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
    bool isPalindrome(ListNode* head) {
      vector<int>v;
      int length=0;
      while(head!=NULL){
        v.push_back(head->val);
        head=head->next;
        length++;
      }
      
      for(auto elem:v)cout<<elem;
      
      int start=0;
      int end=length-1;
      while(start<=end){
        if(v[start]==v[end]){
          start++;
          end--;
        }
        else{
          return false;
        }
      }
      
       return true; 
    }
};