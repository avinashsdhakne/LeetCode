- memoization
```
class Solution {
public:
int findAns(string s1, string s2, int idx1, int idx2, vector<vector<int>>  &dp){
if(idx1 >= s1.size() || idx2 >= s1.size()){
return 0;
}
if(dp[idx1][idx2] != -1){
return dp[idx1][idx2];
}
if(s1[idx1] == s2[idx2]){
return dp[idx1][idx2] = 1 + findAns(s1, s2, idx1 + 1, idx2 + 1, dp);
}
else{
return dp[idx1][idx2] = max(findAns(s1, s2, idx1 + 1, idx2, dp), findAns(s1, s2, idx1, idx2 + 1, dp));
}
}
int longestPalindromeSubseq(string s) {
string s1 = s;
vector<vector<int>> dp(s.size(), vector<int> (s.size(), -1));
reverse(s.begin(), s.end());
return findAns(s, s1, 0, 0, dp);
}
};
```