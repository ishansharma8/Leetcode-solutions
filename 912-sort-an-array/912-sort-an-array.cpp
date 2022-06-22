class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size(); 
        mergesort(nums,0,n-1);    //making 1 func mergesort
        return nums;
    }
    
    void mergesort(vector<int>& nums,int l,int r){    //sorting frm l to r
        if(l>=r){         //when we hv 1 elemnt ,then left & rht same
            return;       //doin noth & func returtype void sotyped only return
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
        
        int tempLP=0,tempRP=0,numsP=l;
        while(tempLP<tempL.size()&&tempRP<tempR.size()){
            if(tempL[tempLP]<=tempR[tempRP]){
                nums[numsP]=tempL[tempLP];
                tempLP++;
                numsP++;
            }
            else{
                nums[numsP]=tempR[tempRP];
                tempRP++;
                numsP++;   
            }
        }
        
        while(tempLP<tempL.size()){
            nums[numsP]=tempL[tempLP];
            tempLP++;
            numsP++;
        }
        while(tempRP<tempR.size()){
            nums[numsP]=tempR[tempRP];
            tempRP++;
            numsP++;
        }
        }
       
};