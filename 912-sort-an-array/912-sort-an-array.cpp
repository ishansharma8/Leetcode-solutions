class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        quicksort(nums,0,n-1);
        return nums;
    }
    
    void quicksort(vector<int>& nums,int start ,int end){
        if(start>=end){
            return;
        }
        int pivot_index=partition(nums,start,end);
        quicksort(nums,start,pivot_index-1); 
        quicksort(nums,pivot_index+1,end);     
    }
    
    int partition(vector<int>& nums,int start,int end){
        int random=start+rand()%(end-start);
        swap(nums[end],nums[random]);
        int pivot=nums[end];
        int j=start-1;
        for(int i=start;i<end;i++){
            if(nums[i]<pivot){
                j++;
                swap(nums[j],nums[i]);
                
            }
        }
        j++;
        swap(nums[j],nums[end]);
        return j;
    }
    
};