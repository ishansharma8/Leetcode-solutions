class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low= *max_element(weights.begin(), weights.end());
        int high=accumulate(weights.begin(), weights.end(), 0);
        
        
        int maxelem=*max_element(weights.begin(), weights.end());
        int ans=0;
        
        while(low<=high){
            int middle=low+(high-low)/2;
        //   cout<<middle<<" ";

            
            //agar ek bhi weight jaada hua middle se ,toh it means vo kbhi bhi uthaya nhi jayega 
            //eg (1+3)/2=2  ,and max weight =4 ,toh 2 kbhi utha hi nhi paega 4 ko
            // if(middle<maxelem){
            //     low=middle+1;
            //     continue;
            // }
            
            int days_needed=DaysRequired(weights,middle,high);
            
            
            if(days_needed>days){
                low=middle+1;
                                //cout<<middle<<" ";

            }
            else {    
               //if(days_needed<days)
              //  cout<<middle;
                ans=middle;
                //cout<<ans<<endl;
                high=middle-1;
            }
        }
        return ans;
    }
    
    int DaysRequired(vector<int>& weights, int middle ,int totalsum){
        int totalelem=weights.size();
        int count=0,i=0;
        int currsum=middle;
        
        //cout<<"idhar aagya:1 ";
        while(i!=totalelem && i<weights.size()){
            currsum=currsum-weights[i];
            if(currsum<0){ //basically for next iteration ,it should be on that eleeent only\
                           //but if it is =0.then it should move to the next element.and inc the count
                count++;
                currsum=middle;
                i--;
              
            }
            
            if(currsum==0){ //basically for next iteration ,it should be on that eleeent only\
                           //but if it is =0.then it should move to the next element.and inc the count
               // cout<<"idhar aagya:1 ";
                count++;
                currsum=middle;
                if(i==totalelem-1){ //because i starts from 0 ,so i will be on 9 for 10 totalelem
                    return count;
                }
                
            }

            i++;
         
        }

        if(i==totalelem){
            return count+1;
        }

        return count;
    }
};

//middle==curr ship capapcity