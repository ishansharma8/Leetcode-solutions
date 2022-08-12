class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        mergesort(nums,0,n-1);
        return nums;
    }
    
    void mergesort(vector<int>& nums,int l,int r){
        if(l>=r){
            return;
        }
        int mid=l+(r-l)/2;
        mergesort(nums,l,mid);
        mergesort(nums,mid+1,r);
        merge(nums,l,mid,r);
    }
    void merge(vector<int>& nums,int l,int mid,int r){
        vector<int>tempL,tempR;
    
        
        for(int i=l;i<=mid;i++){
            tempL.push_back(nums[i]);
        }
        
        for(int i=mid+1;i<=r;i++){
            tempR.push_back(nums[i]);
        }
        int left=0;
        int right=0;
        int ptr=l;
        
        while(left<tempL.size() && right<tempR.size() ){
            if(tempL[left]<tempR[right]){
                nums[ptr]=tempL[left];
                left++;
                ptr++;
            }
            else{
                nums[ptr]=tempR[right];
                right++;
                ptr++;
            }
        }
        
        while(left<tempL.size()){
            nums[ptr]=tempL[left];
            left++;
            ptr++;
        }
        while(right<tempR.size()){
            nums[ptr]=tempR[right];
            right++;
            ptr++;
        }
        
    }
        
        
};
    