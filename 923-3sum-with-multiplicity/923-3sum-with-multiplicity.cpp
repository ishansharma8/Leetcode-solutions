class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int n=arr.size();
        int mod=1e9+7;
        sort(arr.begin(),arr.end());
        int count=0;
        for(int i=0;i<n;i++){
            int j=i+1,k=n-1;
            int tnew=target-arr[i];
            while(j<k){
                if(arr[j]+arr[k]<tnew){
                    j++;
                }
                else if(arr[j]+arr[k]>tnew){
                    k--;
                }
                else{
                    if(arr[j]==arr[k]){
                        long long x=k-j+1;
                        long long y=k-j;
                        long long temp=((x)*(y))/(long long) 2;
                        temp=temp%mod;
                        count+=temp;
                        count%=mod;
                        break;
                    }
                    else{
                        int left=1;
                        int right=1;
                        while(j+1<k && arr[j]==arr[j+1]){
                            j++;
                            left++;
                        }
                         while(k-1>j && arr[k]==arr[k-1]){
                            k--;
                            right++;
                        }
                        count+=(left*right)%mod;
                        count=count%mod;
                        j++;
                        k--;
                    }
                    
                }
                
            }
        }
        return count;
    }
};