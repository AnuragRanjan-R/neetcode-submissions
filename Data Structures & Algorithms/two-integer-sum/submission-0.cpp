class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hsmp; 
        for (int i = 0; i<nums.size(); i++){
            int val = target - nums[i];
            if(hsmp.find(val) != hsmp.end()){
                int index = hsmp[val];
                return {index,i};
            }
            hsmp[nums[i]] = i;
        }
        return {};
    }
};
