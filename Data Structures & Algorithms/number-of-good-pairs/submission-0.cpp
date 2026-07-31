class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int L,R;
        int count = 0;
        for(L = 0 ; L <nums.size()-1; L++ ){
            for(R = nums.size()-1; R >L;R--){
                if(nums[L] == nums[R]){
                    count++;
                }
            }
        }
    return count;
    }
};