class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // While `val` exists in the vector, remove it
        while (find(nums.begin(), nums.end(), val) != nums.end()) {
            nums.erase(find(nums.begin(), nums.end(), val));
        }
        // Return the new size of the vector
        return nums.size();
    }
};