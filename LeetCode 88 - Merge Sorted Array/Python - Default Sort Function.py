class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        # Replace the trailing zeros in nums1 with elements from nums2
        nums1[m:] = nums2
        # Sort nums1 to merge and organize the arrays
        nums1.sort()
