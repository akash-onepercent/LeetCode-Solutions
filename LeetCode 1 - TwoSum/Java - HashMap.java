class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        // HashMap to store complements and their indices
        Map<Integer, Integer> mapping = new HashMap<>();

        // Iterate through the array with index and value
        for (int i = 0; i < nums.length; i++) {
            // Calculate the complement needed to reach the target
            int complement = target - nums[i];

            // Check if the current value is already a complement in the hash map
            if (mapping.containsKey(nums[i])) {
                return new int[] { mapping.get(nums[i]), i }; // Return indices if complement is found
            }

            // Store the complement and its index in the hash map
            mapping.put(complement, i);
        }

        return new int[] {}; // Return an empty array if no solution exists
    }
}