class Solution {
public:
    int missingNumber(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());

        int n = nums.size();
        int expectedSum = (n * (n + 1)) / 2;

        int actualSum = 0;
        for (int i = 0; i < n; i++) {
            actualSum += nums[i];
        }

        int missing = expectedSum - actualSum;
        return missing;
        
    }
};