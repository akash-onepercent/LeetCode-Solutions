class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        # Step 1: Create a hash map where the key is the number and the value is a list of indices
        mapping = dict()
        for index, value in enumerate(nums):
            if value in mapping:
                mapping[value].append(index)  # Append index to the list if value is already in the hash map
            else:
                mapping[value] = [index]  # Initialize with a list containing the index

        # Step 2: Sort the array to apply the two-pointer technique
        nums.sort()

        # Step 3: Initialize two pointers
        left, right = 0, len(nums) - 1

        # Step 4: Use the two-pointer approach to find the two numbers that add up to the target
        while left < right:
            if nums[left] + nums[right] > target:
                right -= 1  # Move the right pointer to decrease the sum
            elif nums[left] + nums[right] < target:
                left += 1  # Move the left pointer to increase the sum
            else:
                # Retrieve original indices from the mapping
                val1, val2 = mapping[nums[left]].pop(), mapping[nums[right]].pop()
                return [val1, val2]