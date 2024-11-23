class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Replace the unused portion of nums1 with nums2
        for (int i = 0; i < n; ++i) {
            nums1[m + i] = nums2[i];
        }
        // Sort nums1 to merge and organize the arrays
        sort(nums1.begin(), nums1.end());
    }
};
