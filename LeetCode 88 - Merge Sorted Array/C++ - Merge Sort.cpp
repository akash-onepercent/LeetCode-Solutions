class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     
        int i = 0; // Pointer for nums1
        int j = 0; // Pointer for nums2
        int k = 0; // Pointer for the result array
        vector<int> result(m + n); // Temporary array to hold the merged result
        
        // Merge elements from nums1 and nums2 while both have remaining elements
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                result[k] = nums1[i];
                i++;
            } else {
                result[k] = nums2[j];
                j++;
            }
            k++;
        }
        
        // Add remaining elements from nums1, if any
        while (i < m) {
            result[k] = nums1[i];
            i++;
            k++;
        }
        
        // Add remaining elements from nums2, if any
        while (j < n) {
            result[k] = nums2[j];
            j++;
            k++;
        }
        
        // Copy the merged result back to nums1
        for (int x = 0; x < result.size(); x++) {
            nums1[x] = result[x];
        }
    }
};
