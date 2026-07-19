class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int current = INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum = 0;
            for(int j=i;j<nums.size();j++){
                sum +=nums[j];

                if(sum >= target){
                    current = min(current, j-i+1);
                    break;
                }

            }
        }
        return current == INT_MAX ? 0 : current;
    }
};