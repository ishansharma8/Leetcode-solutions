class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(), nums.end(), 0);
        int ans=0;
        
        while(low<=high){
            int mid=low+(high-low)/2;
         //   cout<<mid<<endl;
            
            int splitnumber=splitintokparts(nums,mid,high);
            if(splitnumber>k){
                //means the number is very less
                low=mid+1;                
            }
            
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
        
        
        int splitintokparts(vector<int>& nums,int mid,int high){
            int i=0;
            int count=0;
            int weightleft=mid;
            
            while(i<nums.size()){                
                 weightleft=weightleft-nums[i];
                    if(weightleft<0){
                        count++;
                        weightleft=mid;
                        i--;
                    }
                    
                    if(weightleft==0){
                        count++;
                        
                       // cout<<i<<" ";
                       // cout<<nums[nums.size()-2]<<endl;
                    if(i==nums.size()-2 && nums[nums.size()-1]==0){
                        return count;
                    }
            //this condition put for test case[5,2,4,1,3,6,0],k=4 ,when last element =0,we dont want the count to be increased by 1 ,just for this last element 0
                        weightleft=mid;
                          if(i==nums.size()-1){ //because i starts from 0 ,so i will be on 9 for 10 totalelem
                          return count;
                }
            }
                
                   i++;                     
        }
            
             if(i==nums.size()){
            return count+1;
        }
               return count;  
            }
         
};