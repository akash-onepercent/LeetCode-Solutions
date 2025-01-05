class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Initialize 'index' to 0.
        // This pointer will traverse through the array and check for duplicates.
        int index = 0;

        // Use a while loop to iterate through the array.
        while (index < nums.size()) {
            // Check if the current element (nums[index]) exists in the subarray
            // starting from index+1 to the end. This checks for duplicates.
            while (find(nums.begin() + index + 1, nums.end(), nums[index]) != nums.end()) {
                // If a duplicate is found, erase it using the erase() method.
                // The erase() operation modifies the array by removing the duplicate at index+1.
                nums.erase(nums.begin() + index + 1);
            }

            // Increment 'index' to move to the next element and repeat the check.
            index++;
        }

        // Return the size of the modified array, which now contains only unique elements.
        return nums.size();
    }
};
