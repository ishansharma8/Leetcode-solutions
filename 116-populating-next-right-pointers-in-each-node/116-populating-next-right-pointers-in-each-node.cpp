class Solution {
public:
    Node* connect(Node* root) {
      
      if(root==NULL)return NULL;
      queue<Node*>q;
      q.push(root);
      
      while(!q.empty()){
        int n=q.size();                  // all the elements in a particular level
        for(int i=0;i<n-1;i++){
          Node* temp=q.front();
          q.pop();                     //temp goot out
          temp->next=q.front();
          
          if(temp->left){             //last level children will be null
            q.push(temp->left);
          }
          if(temp->right){
            q.push(temp->right);
          }
        }

          Node* temp=q.front();
          if(temp->left){   
            q.push(temp->left);
          }
          if(temp->right){
            q.push(temp->right);
          }
          
          q.pop();
      }
      
      return root;
      
    }
};