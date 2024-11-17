class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        // Iterate over the array with the first pointer `i`
        for (int i = 0; i < nums.length; i++) {
            // Iterate with the second pointer `j` starting from `i + 1`
            for (int j = i + 1; j < nums.length; j++) {
                // Check if the current pair sums to the target
                if (nums[i] + nums[j] == target) {
                    return new int[] { i, j }; // Return indices if a match is found
                }
            }
        }
        return new int[] {}; // Return an empty array if no solution exists
    }
}