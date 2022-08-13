class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        quicksort(nums,0,n-1,k);
        return nums[k-1];
    }
    
    void quicksort(vector<int>& nums,int start ,int end,int k){
        if(start>=end){
            return;
        }
        int pivot_index=partition(nums,start,end);
        
        int leftsize=pivot_index-start+1;
        int rightsize=end-pivot_index;
        
        if(leftsize>k){
            quicksort(nums,start,pivot_index-1,k); 
        }
        else if(leftsize==k){
            return ;
        }
        else{
            quicksort(nums,pivot_index+1,end,k-leftsize); 
        }
                   
    }
    
    int partition(vector<int>& nums,int start,int end){
        int pivot=nums[end];
        int j=start-1;
        for(int i=start;i<end;i++){
            if(nums[i]>=pivot){
                j++;
                swap(nums[j],nums[i]);
            }
        }
    
        j++;
        swap(nums[j],nums[end]);
        return j;
    }
    
};