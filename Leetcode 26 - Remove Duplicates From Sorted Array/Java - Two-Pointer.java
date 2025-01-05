class Solution {
    public int removeDuplicates(int[] nums) {
        // Initialize the 'slow' pointer to 1. This pointer tracks the position where the next
        // unique value will be placed in the array.
        int slow = 1;

        // Iterate through the array using the 'fast' pointer, starting from index 1.
        // The 'fast' pointer checks each element to identify duplicates.
        for (int fast = 1; fast < nums.length; fast++) {
            // If the current element (nums[fast]) is not the same as the previous element (nums[fast - 1]),
            // it means we found a unique element.
            if (nums[fast] != nums[fast - 1]) {
                // Copy the unique element at the 'fast' pointer to the position marked by the 'slow' pointer.
                nums[slow] = nums[fast];

                // Move the 'slow' pointer one step forward to prepare for the next unique element.
                slow++;
            }
        }

        // The 'slow' pointer now represents the length of the modified array with unique elements.
        return slow;
    }
}
