class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        // Create a set to store unique elements.
        std::set<int> uniqueSet(nums.begin(), nums.end());

        // Clear the original array and insert unique elements from the set.
        nums.clear();
        nums.insert(nums.end(), uniqueSet.begin(), uniqueSet.end());

        // Return the size of the unique set, representing the count of unique elements.
        return nums.size();
    }
};
