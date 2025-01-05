class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Initialize the 'slow' pointer to 1.
        // This pointer tracks the position in the array where the next unique element should be placed.
        int slow = 1;

        // Iterate through the array using the 'fast' pointer, starting at index 1.
        // The 'fast' pointer scans each element of the array to identify duplicates.
        for (int fast = 1; fast < nums.size(); ++fast) {
            // Check if the current element (nums[fast]) is different from the previous element (nums[fast - 1]).
            // Since the array is sorted, duplicates will always appear consecutively.
            if (nums[fast] != nums[fast - 1]) {
                // If a unique element is found, copy it to the position marked by the 'slow' pointer.
                nums[slow] = nums[fast];

                // Increment the 'slow' pointer to prepare for the next unique element.
                ++slow;
            }
        }

        // The value of 'slow' represents the new length of the array with unique elements.
        return slow;
    }
};
