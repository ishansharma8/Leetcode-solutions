class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector<vector<int>>result;
      
      int n=nums.size();
        if(n<3){
        return {};  //Base case 1  no need to sort
      }  
      sort(nums.begin(),nums.end());
      
      if(nums[0]>0){
          return {};  //Base case 2 (if u dont sort then it can give wrong ans like [1,0,-1])
        }
      
      
      
      
      for(int i=0;i<n-2;i++){ //Traversing the array to fix the number.
        
        if(i>0 && nums[i]==nums[i-1]){//If number is getting repeated, ignore the lower loop and continue.
          continue;
        }
          
        int j=i+1;    //Make two pointers high and low, and initialize sum as 0.
        int k=n-1;
        while(j<k){   //Search between two pointers, just similiar to binary search.
          int sum =nums[i]+nums[j]+nums[k];
          
          if(sum<0){ //If sum is -ve, means, we need more +ve numbers to make it 0, increament low (low++).
            j++;
          }
          else if(sum>0){//If sum is +ve, means, we need more -ve numbers to make it 0, decreament high (high--).
            k--;
          }
          else{
            result.push_back({nums[i],nums[j],nums[k]});//we have found the required triplet, push it in answer vector
            
            while(j<k && nums[j]==nums[j+1]){   // Update j(low) with last occurences of j 
              j++;
            }
            j++;
            
            while(j<k && nums[k]==nums[k-1]){  // Update  k(high) with last occurences k.
              k--;
            }
            k--;  
          } 
        }
      }
      return result;
        
    }
};