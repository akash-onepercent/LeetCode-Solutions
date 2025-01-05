class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        # Convert the array to a set to remove duplicates.
        unique_set = set(nums)

        # Convert the set back to a sorted list to maintain order.
        unique_list = sorted(unique_set)

        # Copy unique elements back to the original array.
        for i in range(len(unique_list)):
            nums[i] = unique_list[i]

        # Return the length of the unique list, representing the count of unique elements.
        return len(unique_list)
