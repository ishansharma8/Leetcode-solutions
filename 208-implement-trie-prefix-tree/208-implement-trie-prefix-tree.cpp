class Trie {
public:
        Trie* child[26]={}; 
        bool isword=false;
    
    Trie() {
        
    }
    
    void insert(string word) {
        Trie* root=this;
        for(int i=0;i<word.size();i++){
            char c=word[i];
            int idx=c-'a';
            
            if(root->child[idx]==NULL)
                root->child[idx]=new Trie();
            root=root->child[idx];
        }
        root->isword=true;
    }
    
    bool search(string word) {
        Trie* root=this;
        for(int i=0;i<word.size();i++){
            char c=word[i];
            int idx=c-'a';
            
            if(root->child[idx]==NULL)
                return false;
            root=root->child[idx];
        }
        return root->isword;
    }
    
    bool startsWith(string prefix) {
         Trie* root=this;
         for(int i=0;i<prefix.size();i++){
            char c=prefix[i];
            int idx=c-'a';
            
            if(root->child[idx]==NULL)
                return false;
            root=root->child[idx];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */