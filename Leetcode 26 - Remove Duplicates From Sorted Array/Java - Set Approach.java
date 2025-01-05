class Solution {
    public int removeDuplicates(int[] nums) {
        // Create a HashSet to store unique elements.
        HashSet<Integer> uniqueSet = new HashSet<>();

        // Iterate over the array and add elements to the set.
        for (int num : nums) {
            uniqueSet.add(num);
        }

        // Use an ArrayList to store the unique elements in order.
        ArrayList<Integer> uniqueList = new ArrayList<>(uniqueSet);

        // Sort the unique elements to maintain order.
        uniqueList.sort(null);

        // Copy unique elements back to the original array.
        for (int i = 0; i < uniqueList.size(); i++) {
            nums[i] = uniqueList.get(i);
        }

        // Return the size of the unique list, representing the count of unique elements.
        return uniqueList.size();
    }
}
