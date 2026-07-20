class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int L,R;
        vector<int> res;
        for(L=0;L<numbers.size();L++){
            for(R=numbers.size()-1;R>L;R--){
                if(numbers[L]+numbers[R]==target){
                    res.push_back(L+1);
                    res.push_back(R+1);
                }
            }
        }
        return res;
    }
};
