class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 2){
            return max(nums[0], nums[1]);
        }
        
        if(nums.size() == 1){
            return nums[0];
        }
        
        vector<int> dp(nums.size() + 1);
        dp[0] = 0;
        dp[1] = nums[0];
        for(int i=2; i<dp.size(); i++){
            int notPick = dp[i-1];
            int pick = nums[i-1] + dp[i-2];
            dp[i] = max(pick, notPick);
        }
        
        for(auto i: dp) cout<<i<<" ";
        cout<<endl;
        return dp.back();
    }
};