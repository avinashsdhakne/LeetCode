class Solution {
public:
    int find(vector<int> nums, int index, vector<int> &dp){
        if(index == 1){
            return max(nums[0], nums[1]);
        }
        if(index == 0){
            return nums[0];
        }
        
        if(dp[index] != -1){
            return dp[index];
        }
        
        int ans1 = nums[index] + find(nums, index-2, dp);
        int ans2 = find(nums, index-1, dp);
        // cout<<ans1<<" "<<ans2<<endl;
        return dp[index] = max(ans1, ans2);
    }
    int rob(vector<int>& nums) {
        vector<int> dp (nums.size(), -1);
        return find(nums, nums.size()-1, dp); 
    }
};