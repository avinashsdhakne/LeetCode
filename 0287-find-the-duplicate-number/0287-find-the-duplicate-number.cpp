class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int leader = nums[0];
        while(1){
            if(nums[leader] == 0) return leader;
            int temp = leader;
            leader = nums[leader];
            nums[temp] = 0;
        }
        return 0;
    }
};