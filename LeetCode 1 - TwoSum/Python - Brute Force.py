class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        # Iterate over the list with the first pointer `i`
        for i in range(len(nums)):
            # Iterate with the second pointer `j` starting from `i + 1`
            for j in range(i + 1, len(nums)):
                # Check if the current pair sums to the target
                if nums[i] + nums[j] == target:
                    return [i, j]  # Return indices if a match is found
                
        return []  # Return an empty list if no solution exists