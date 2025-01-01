class Solution {
    public int removeElement(int[] nums, int val) {
        // Create a List view of the array
        List<Integer> list = new ArrayList<>();
        for (int num : nums) {
            list.add(num); // Add elements to the list
        }

        // Remove all occurrences of `val`
        while (list.contains(val)) {
            list.remove((Integer) val); // Explicitly remove the Integer object
        }

        // Copy the modified List back to the array
        for (int i = 0; i < list.size(); i++) {
            nums[i] = list.get(i);
        }

        // Return the new size of the array
        return list.size();
    }
}