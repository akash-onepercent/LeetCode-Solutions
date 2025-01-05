class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        # Initialize the 'slow' pointer to 1.
        # This pointer keeps track of the position where the next unique element should be placed.
        slow = 1

        # Iterate through the array using the 'fast' pointer, starting at index 1.
        # The 'fast' pointer scans the array to find unique elements.
        for fast in range(1, len(nums)):
            # Check if the current element (nums[fast]) is different from the previous element (nums[fast-1]).
            # Since the array is sorted, duplicates will always appear consecutively.
            if nums[fast] != nums[fast - 1]:
                # If a unique element is found, copy it to the position indicated by the 'slow' pointer.
                nums[slow] = nums[fast]

                # Increment the 'slow' pointer to move to the next position for unique elements.
                slow += 1

        # The 'slow' pointer now represents the length of the array containing only unique elements.
        return slow
