class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        // Replace the unused portion of nums1 with elements from nums2
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
        // Sort nums1 to merge and organize the arrays
        Arrays.sort(nums1);
    }
}
