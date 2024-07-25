class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current = 0;
        int global = INT_MIN;
        for(int i:nums){
            current += i ;
            global = max(global, current);
            cout << current << "," << global << endl;
            if (current < 0) current = 0;
        } 

        return global;
    }
};