go to the position where leader is directing, after visiting make it 0, and change the leader to that location pointer, if leader is pointing 0 location then that place is already visited hence the number is repeating.
​
`
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
`