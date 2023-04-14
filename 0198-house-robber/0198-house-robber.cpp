class Solution {
public:
    int rob(vector<int>& nums) {
        
        if(nums.size() == 1){
            return nums[0];
        }
        
        vector<int> dp(nums.size() + 1);
        int ans;
        int back = 0;
        int prev = nums[0];
        for(int i=2; i<dp.size(); i++){
            int notPick = prev;
            int pick = nums[i-1] + back;
            ans = max(pick, notPick);
            back = prev;
            prev = ans;
        }
        
        return ans;
    }
};