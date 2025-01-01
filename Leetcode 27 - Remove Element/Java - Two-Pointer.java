class Solution {
    public int removeElement(int[] nums, int val) {
        // Initialize a pointer `slow` to track the position of the next valid element
        int slow = 0;

        // Iterate throu- Initialize *slow = 0*, which tracks the position for valid elements.
        for (int fast = 0; fast < nums.length; fast++) {
            // Check if the current element (nums[fast]) is not equal to `val`
            if (nums[fast] != val) {
                // If valid, copy the current element to the position marked by `slow`
                nums[slow] = nums[fast];
                // Increment `slow` to prepare for the next valid element
                slow++;
            }
        }

        // Return the new length of the array containing only valid elements
        return slow;
    }
}