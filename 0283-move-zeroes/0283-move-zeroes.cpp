class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i = 0,j = 0; i < nums.size(); i++){
            if(nums[i] != 0) {
                std::cout << i << j << std::endl;
                swap(nums[j],nums[i]);
                j++;
            }
        }
    }
};