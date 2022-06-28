class Solution {
public:
int longestSubstring(string s, int k) {
return helper(0,s.size()-1, s, k);
}
int helper(int begin, int end, string & s, int k)
{
if(end<begin) return 0;
if(end-begin+1<k) return 0;
vector<int> num_of(26,0);
​
for(int i=begin; i<=end; i++)
{
int idx = s[i] - 'a';
num_of[idx] ++;
}
​
int len = end - begin + 1;
​
for(int j=begin; j<=end; j++)
{
if(num_of[s[j] - 'a'] < k)
{
int left = helper(begin,j-1,s,k);
int right = helper(j+1, end,s,k);
len = max(left, right);
return len;
}
}
return len;
}
};
​
​
2)std::map<char,int>::iterator best= std::max_element(mp.begin(),mp.end(),[] (const std::pair<char,int>& a, const std::pair<char,int>& b)->bool{ return a.second < b.second; } );
std::cout << best->first << " , " << best->second << "\n";
​
to find max value