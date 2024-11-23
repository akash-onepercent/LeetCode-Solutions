class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Initialize the pointer `k` for the last position in nums1
        int k = m + n - 1;

        // Merge nums1 and nums2 starting from the end
        while (m > 0 && n > 0) {
            // Compare the last elements of nums1 and nums2
            if (nums1[m - 1] > nums2[n - 1]) {
                // If the current element in nums1 is larger, place it at position `k`
                nums1[k] = nums1[m - 1];
                m--; // Move the pointer for nums1
            } else {
                // If the current element in nums2 is larger, place it at position `k`
                nums1[k] = nums2[n - 1];
                n--; // Move the pointer for nums2
            }
            k--; // Move the pointer for the merged array
        }

        // Copy any remaining elements from nums2 (if nums1 is fully processed)
        while (n > 0) {
            nums1[k] = nums2[n - 1];
            n--; // Move the pointer for nums2
            k--; // Move the pointer for the merged array
        }

        // Note: Any remaining elements from nums1 are already in place, so no action is needed
    }
};
