class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int count0=0,count1=0,count2=0;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0)count0++;
            if(nums[i]==1)count1++;
            if(nums[i]==2)count2++;
        }
        int index=0;
        while(index<count0){
            nums[index]=0;
            index++;
        }
        
         while(index<(count0+count1)){
            nums[index]=1;
            index++;
        }
        
         while(index<(count0+count1+count2)){
            nums[index]=2;
            index++;
        }
        
    }
};



