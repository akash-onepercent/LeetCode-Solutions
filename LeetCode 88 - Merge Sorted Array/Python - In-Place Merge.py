class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        # Start filling nums1 from the last index
        i = m + n - 1  # Pointer for the merged array
        p1 = m - 1     # Pointer for nums1
        p2 = n - 1     # Pointer for nums2

        # Compare elements from the end of nums1 and nums2
        while p1 >= 0 and p2 >= 0:
            if nums1[p1] > nums2[p2]:
                nums1[i] = nums1[p1]
                p1 -= 1  # Move nums1 pointer
            else:
                nums1[i] = nums2[p2]
                p2 -= 1  # Move nums2 pointer
            i -= 1  # Move the merged array pointer

        # Copy remaining elements from nums2
        while p2 >= 0:
            nums1[i] = nums2[p2]
            p2 -= 1
            i -= 1