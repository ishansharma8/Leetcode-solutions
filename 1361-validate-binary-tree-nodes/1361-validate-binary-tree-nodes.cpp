class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftchild, vector<int>& rightchild) {
        
        vector<int>indegree(n,0);
        int root=-1;
        for(int i=0;i<n;i++){
            
            if(leftchild[i]!=-1 && indegree[leftchild[i]]++ >1){
                return false;
            }
                
            if(rightchild[i]!=-1 && indegree[rightchild[i]]++ >1)
                return false;
        }
        // for(int i=0;i<n;i++){
        //     cout<<indegree[i]<<" ";
        // }
        
        
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                if(root==-1)
                {
                   root=i; 
                }
                else
                    return false;
            }
        }
        //root exist krta bhi hi ya nhi,if no node with indegree 0,then that is also problem=>no root node of our tree
        if(root==-1)
            return false;  
        
        int c=countnodes(n,leftchild,rightchild,root);
        
        if(c==n)
            return true;
        
        else
            return false;
    }
    
    int countnodes(int n, vector<int>& leftchild, vector<int>& rightchild,int root)
    {
        if(root==-1){
            return 0;
        }
        return 1+countnodes(n,leftchild,rightchild,leftchild[root])+countnodes(n,leftchild,rightchild,rightchild[root]);
    }
};