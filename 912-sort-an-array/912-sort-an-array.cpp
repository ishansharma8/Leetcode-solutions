class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        quicksort(nums,0,n-1);
        return nums;
    }
    
    void quicksort(vector<int>& nums,int st,int end){
        //subarray defined by starting nd ending index
        if(st>=end){
            return;
        } 
        int pivot_index=partition(nums,st,end);
        quicksort(nums,st,pivot_index-1); 
        quicksort(nums,pivot_index+1,end); 
    }
    
    int partition(vector<int>& nums,int st,int end){
        int random=st+rand()%(end-st);
        swap(nums[end],nums[random]);
        int pivot=nums[end];
        int j=st-1;
        for(int i=st;i<end;i++){
            if(nums[i]<pivot){
                j++;
            swap(nums[j],nums[i]);
        }
    }
        j++;
        swap(nums[j],nums[end]); //all nos less than last elemnt are upto j
        return j;
        
    }
    
};