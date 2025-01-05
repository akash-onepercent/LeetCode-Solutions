class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        # Initialize 'index' to 0.
        # This pointer will traverse through the array and check for duplicates.
        index = 0

        # Use a while loop to iterate through the array as long as 'index' is within bounds.
        while index < len(nums):
            # Check if the current element (nums[index]) exists in the subarray starting
            # from index+1 to the end. This checks for duplicates.
            while nums[index] in nums[index + 1:]:
                # If a duplicate is found, remove it using the pop() method.
                # The pop() operation modifies the array by removing the duplicate at index+1.
                nums.pop(index + 1)

            # Increment 'index' to move to the next element and repeat the check.
            index += 1

        # Return the length of the modified array, which now contains only unique elements.
        return len(nums)
