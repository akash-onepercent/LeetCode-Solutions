class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        # Use a while loop to remove all occurrences of `val` using `remove`
        while val in nums:
            nums.remove(val)
        # Return the new length of the list
        return len(nums)