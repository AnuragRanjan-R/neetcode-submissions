class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int L,R;
        for(L=0;L<nums.size();L++){
            for(R=nums.size()-1;R>L;R--){
                if(nums[L]==nums[R]){
                    nums.erase(nums.begin() + R);
                }
            }
        }
        int k = nums.size();
        return k;
    }
};