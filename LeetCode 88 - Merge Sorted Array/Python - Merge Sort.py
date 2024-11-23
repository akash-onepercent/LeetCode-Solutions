class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        i, j = 0, 0  # Pointers for nums1 and nums2
        k = 0        # Pointer for the result array
        result = [0] * (m + n)  # Temporary array to hold the merged result
        
        # Merge elements from nums1 and nums2 while both have remaining elements
        while i < m and j < n:
            if nums1[i] < nums2[j]:
                result[k] = nums1[i]
                i += 1
            else:
                result[k] = nums2[j]
                j += 1
            k += 1
        
        # Add remaining elements from nums1, if any
        while i < m:
            result[k] = nums1[i]
            i += 1
            k += 1
        
        # Add remaining elements from nums2, if any
        while j < n:
            result[k] = nums2[j]
            j += 1
            k += 1
        
        # Copy the merged result back to nums1
        nums1[:] = result