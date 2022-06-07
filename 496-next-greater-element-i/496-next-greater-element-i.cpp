class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        int n1=nums1.size();
        unordered_map<int,int>ump;
        
        stack<int>s;
        vector<int>ngr(n,-1);
        vector<int>ans(n1);
        //ump[nums2[n-1]]=-1;
        
        
        for(int i=n-1;i>=0;i--){
            while(!s.empty() && s.top()<=nums2[i]){
                s.pop();
            }
            if(!s.empty()){
                ngr[i]=s.top();
            }
            s.push(nums2[i]);
        }
        
        for(int i=0;i<n;i++){
            ump[nums2[i]]=ngr[i];
        }
        // for (auto i : ump)
        // cout << i.first << "   " << i.second
        //      << endl;
        
        for(int i=0;i<n1;i++){
            ans[i]=ump[nums1[i]];
        }
        return ans;
    }
};