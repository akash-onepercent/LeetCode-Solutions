class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Initialize a pointer `slow` to track the position of the next valid element
        int slow = 0;

        // Iterate through the array using the `fast` pointer
        for (int fast = 0; fast < nums.size(); ++fast) {
            // Check if the current element (nums[fast]) is not equal to `val`
            if (nums[fast] != val) {
                // If valid, copy the current element to the position marked by `slow`
                nums[slow] = nums[fast];
                // Increment `slow` to prepare for the next valid element
                ++slow;
            }
        }

        // Return the new length of the array containing only valid elements
        return slow;
    }
};