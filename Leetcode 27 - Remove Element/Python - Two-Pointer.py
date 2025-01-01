class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        # Initialize a pointer `slow` to track the position of the next valid element
        slow = 0
        
        # Iterate through the array using the `fast` pointer
        for fast in range(len(nums)):
            # Check if the current element (nums[fast]) is not equal to `val`
            if nums[fast] != val:
                # If valid, copy the current element to the position marked by `slow`
                nums[slow] = nums[fast]
                # Increment `slow` to prepare for the next valid element
                slow += 1
        
        # Return the new length of the array containing only valid elements
        return slow