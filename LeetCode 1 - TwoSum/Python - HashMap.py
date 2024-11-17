class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        # Dictionary to store complements and their indices
        mapping = {}

        # Iterate through the list with both index and value
        for index, value in enumerate(nums):
            # Calculate the complement needed to reach the target
            complement = target - value

            # Check if the current value is already a complement in the hash map
            if value in mapping:
                return [mapping[value], index]  # Return indices if complement is found

            # Store the complement and its index in the hash map
            mapping[complement] = index

        return []  # Return an empty list if no solution exists
