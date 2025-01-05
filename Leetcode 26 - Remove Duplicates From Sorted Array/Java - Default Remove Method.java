class Solution {
    public int removeDuplicates(int[] nums) {
        // Convert the array into a dynamic ArrayList for easier removal of elements.
        ArrayList<Integer> list = new ArrayList<>();
        for (int num : nums) {
            list.add(num);
        }

        // Initialize 'index' to 0.
        // This pointer will traverse through the ArrayList and check for duplicates.
        int index = 0;

        // Use a while loop to iterate through the list.
        while (index < list.size()) {
            // Check if the current element (list.get(index)) exists in the sublist
            // starting from index+1 to the end. This checks for duplicates.
            while (list.subList(index + 1, list.size()).contains(list.get(index))) {
                // If a duplicate is found, remove it using the remove() method.
                // The remove() operation modifies the list by removing the duplicate at index+1.
                list.remove(index + 1);
            }

            // Increment 'index' to move to the next element and repeat the check.
            index++;
        }

        // Copy the unique elements back to the original array.
        for (int i = 0; i < list.size(); i++) {
            nums[i] = list.get(i);
        }

        // Return the size of the modified list, which represents the count of unique elements.
        return list.size();
    }
}
