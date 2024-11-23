class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        // Initialize a pointer to fill the merged array from the end
        int k = m + n - 1;

        // Iterate while there are elements in both nums1 and nums2
        while (m > 0 && n > 0) {
            // Compare the last elements of nums1 and nums2
            if (nums1[m - 1] > nums2[n - 1]) {
                // Place the larger element at the current position in nums1
                nums1[k] = nums1[m - 1];
                m--; // Move the pointer for nums1
            } else {
                // Place the larger element from nums2 in nums1
                nums1[k] = nums2[n - 1];
                n--; // Move the pointer for nums2
            }
            k--; // Move the pointer for the merged array
        }

        // Copy any remaining elements from nums2 (if nums1 is exhausted)
        while (n > 0) {
            nums1[k] = nums2[n - 1];
            n--; // Move the pointer for nums2
            k--; // Move the pointer for the merged array
        }

        // No need to copy remaining elements from nums1, as they are already in place
    }
}
