class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        int L,R;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(L=0;L<nums.size();L++){
            for(R=nums.size()-1;R>L;R--){
                if(mp[nums[L]]>2 && nums[L]==nums[R]){
                    nums.erase(nums.begin()+R);
                    mp[nums[L]]--;
                }
            }
        }
        int k=nums.size();
        return k;
    }
};