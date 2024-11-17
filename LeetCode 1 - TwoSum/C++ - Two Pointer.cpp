class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // Step 1: Create a hash map where the key is the number and the value is a list of indices
        unordered_map<int, vector<int>> mapping;
        for (int i = 0; i < nums.size(); i++) {
            mapping[nums[i]].push_back(i); // Add index to the vector associated with the value
        }

        // Step 2: Sort a copy of the array to apply the two-pointer technique
        vector<int> sortedNums = nums; // Create a copy of the original array
        sort(sortedNums.begin(), sortedNums.end());

        // Step 3: Initialize two pointers
        int left = 0, right = sortedNums.size() - 1;

        // Step 4: Use the two-pointer approach to find the two numbers that add up to the target
        while (left < right) {
            int sum = sortedNums[left] + sortedNums[right];
            if (sum > target) {
                right--; // Move the right pointer to decrease the sum
            } else if (sum < target) {
                left++; // Move the left pointer to increase the sum
            } else {
                // Retrieve original indices from the mapping
                int val1 = mapping[sortedNums[left]].back();
                mapping[sortedNums[left]].pop_back();
                int val2 = mapping[sortedNums[right]].back();
                mapping[sortedNums[right]].pop_back();
                return {val1, val2};
            }
        }

        return {}; // Return an empty vector if no solution exists
    }
};
