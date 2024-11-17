class Solution {
    public int[] twoSum(int[] nums, int target) {

        // Step 1: Create a hash map where the key is the number and the value is a list of indices
        Map<Integer, List<Integer>> mapping = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            mapping.computeIfAbsent(nums[i], k -> new ArrayList<>()).add(i);
        }

        // Step 2: Sort the array to apply the two-pointer technique
        int[] sortedNums = nums.clone(); // Create a copy of the original array
        Arrays.sort(sortedNums);

        // Step 3: Initialize two pointers
        int left = 0, right = sortedNums.length - 1;

        // Step 4: Use the two-pointer approach to find the two numbers that add up to the target
        while (left < right) {
            int sum = sortedNums[left] + sortedNums[right];
            if (sum > target) {
                right--; // Move the right pointer to decrease the sum
            } else if (sum < target) {
                left++; // Move the left pointer to increase the sum
            } else {
                // Retrieve original indices from the mapping
                int val1 = mapping.get(sortedNums[left]).remove(0);
                int val2 = mapping.get(sortedNums[right]).remove(0);
                return new int[] { val1, val2 };
            }
        }

        return new int[] {}; // Return an empty array if no solution exists
    }
}