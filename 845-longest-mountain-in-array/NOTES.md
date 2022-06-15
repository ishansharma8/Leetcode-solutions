int longestMountain(vector<int>& arr) {
int n=arr.size();
int ans=0;
for(int i=1;i<n-1;i++){
if((arr[i]>arr[i-1]) && arr[i]>arr[i+1]){
int count=1;
int j=i;
while(j>0 && arr[j]>arr[j-1]){
count++;
j--;
}
int k=i;
while(k<n-1 && arr[k]>arr[k+1]){
count++;
k++;
cout<<count<<endl;
}
ans=max(ans,count);
}
}
return ans;
}
o(n^2) solution
while((nums[i]<nums[i-1]) && i<n){
down++;
i++;
}
this gave me error
writing like this gave error as i<n condition is checked at last but that should be checked 1st na,if i has exceeded n
so we should write like
while(i<n && (nums[i]<nums[i-1])
down++;
i++;
}