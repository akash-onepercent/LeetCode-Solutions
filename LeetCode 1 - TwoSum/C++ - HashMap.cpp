class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // Unordered map to store complements and their indices
        unordered_map<int, int> mapping;

        // Iterate through the vector with index and value
        for (int i = 0; i < nums.size(); i++) {
            // Calculate the complement needed to reach the target
            int complement = target - nums[i];

            // Check if the current value is already a complement in the map
            if (mapping.find(nums[i]) != mapping.end()) {
                return {mapping[nums[i]], i}; // Return indices if complement is found
            }

            // Store the complement and its index in the map
            mapping[complement] = i;
        }

        return {}; // Return an empty vector if no solution exists
    }
};