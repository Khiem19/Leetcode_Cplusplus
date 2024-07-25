class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        
        for (int num : nums){
            if(seen.find(num) != seen.end()){
                return true; // Found a duplicate
            } else {
                seen.insert(num); // Insert the element into the set
            }
        }
        return false; // No duplicates found
    }
};
