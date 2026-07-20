class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int minSum = INT_MAX;
        int maxSum = INT_MIN;
        int arrSum = 0;
        for(int i=0;i<nums.size();i++){
            arrSum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            int sum = 0;
            for (int j=i;j<nums.size();j++){
                sum +=nums[j];
                minSum = min(minSum,sum);
                maxSum = max(maxSum,sum);
            }
        }
         if (maxSum < 0)
            return maxSum;
        return max(maxSum, arrSum - minSum);
    }
};