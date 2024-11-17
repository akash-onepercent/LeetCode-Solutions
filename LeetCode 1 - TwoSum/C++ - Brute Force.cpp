class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // Iterate over the vector with the first pointer `i`
        for (int i = 0; i < nums.size(); i++) {
            // Iterate with the second pointer `j` starting from `i + 1`
            for (int j = i + 1; j < nums.size(); j++) {
                // Check if the current pair sums to the target
                if (nums[i] + nums[j] == target) {
                    return {i, j}; // Return indices if a match is found
                }
            }
        }
        return {}; // Return an empty vector if no solution exists
    }
};