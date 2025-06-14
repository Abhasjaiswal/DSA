// Initialize 2 variables i as 0 and variable j as 1, where i will track the position of the last unique element found and j will iterate through the array to find new unique elements.
// Iterate in array using j from second element to the end of the array.
// If the element at position j is different from the element at position i, it means a new unique element is found. This is because the array is sorted in non-decreasing order, so any new element that is different from the previous one must be unique.
// When a new unique element is found, increment i to move to the next position for storing unique elements. Copy the element at position j to the new position at i. This ensures that the first i + 1 elements of the array are all unique.
// Continue comparing elements and updating the array until j has iterated through the entire array. Once the loop completes, the value of i + 1 represents the number of unique elements in the array.


#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int removeDuplicates(vector<int> &nums) {
    // Edge case
    if (nums.empty()) return 0;

    int i = 0;

    // j starts from 1 and should go till end
    for (int j = 1; j < nums.size(); j++) {
        // If a new unique element is found
        if (nums[j] != nums[i]) {
            i++;                  // Move i forward
            nums[i] = nums[j];    // Copy unique element to correct position
        }
    }

    return i + 1;  // Number of unique elements
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3};

    int ans = removeDuplicates(nums);
    cout<<ans;
}