class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result; 
        for(int i = 0; i < nums.size(); i++){
            for(int y = i+1; y < nums.size(); y++){
                if(nums[i]+nums[y] == target) {
                    result.push_back(i);
                    result.push_back(y);
                }           
            }
        }
        return result;
    }   
};