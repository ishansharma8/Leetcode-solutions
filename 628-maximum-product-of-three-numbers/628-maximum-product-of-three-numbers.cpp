class Solution {
public:
    int maximumProduct(vector<int>& a) {
        int min1,min2,max1,max2,max3;
        int n=a.size();
        min1=min2=INT_MAX;
        max1=max2=max3=INT_MIN;
        long long int product1,product2;
        for(int i=0;i<n;i++){
            if(a[i]<min1){
                min2=min1;
                min1=a[i];
            }
            else if(a[i]<min2){
                min2=a[i];
            }
             if(a[i]>max1){
                max3=max2;
                max2=max1;
                max1=a[i];
                 cout<<" max1 value is "<<max1<<", i value is "<<i<<endl;
            }
           // cout<<endl;
            else if(a[i]>max2){
                max3=max2;
                max2=a[i];
                cout<<" max2 value is "<<max2<<", i value is "<<i<<endl;
            }
            else if(a[i]>max3){
                max3=a[i];
            }
        }
       // cout<<min1<<" "<<min2<<" "<<max1<<" "<<max2<<" "<<max3;      
        product1=max1*min1*min2;
        product2=max1*max2*max3;
        
        
        return max(product1,product2);
    }
};