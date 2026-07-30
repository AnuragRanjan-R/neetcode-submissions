class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += piles[i];
        }
        if (n == h) {
            int maxi = INT_MIN;
            for (int i = 0; i < n; i++) {
                maxi = max(maxi, piles[i]);
            }
            return maxi;
        }
        int temp = (sum + h - 1) / h;   // ceil(sum / h)
        while (true) {
            long long hours = 0;
            for (int i = 0; i < n; i++) {
                hours += (piles[i] + temp - 1) / temp;   // ceil(piles[i]/temp)
            }
            if (hours <= h)
                return temp;
            temp++;
        }
    }
};