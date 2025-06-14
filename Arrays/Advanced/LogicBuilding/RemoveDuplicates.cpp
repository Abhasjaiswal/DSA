// Given an integer array nums sorted in non-decreasing order,
// remove all duplicates in-place so that each unique element appears only once.
// Return the number of unique elements in the array.

// Approach:
// 1. Declare a set and insert all elements from the array into it.
// 2. Since a set only stores unique elements, duplicates are automatically removed.
// 3. Copy all elements from the set back to the original array from the beginning.
// 4. Return the size of the set as the count of unique elements.



#include <bits/stdc++.h>
#include <iostream>
#include <set>

using namespace std;


int removeDuplicates(vector<int>& nums){
    // 1. Declare a set
    set<int> st;

    // 2. Add all elements from array to the set
    for(int val : nums){
        st.insert(val);
    }

    // 3. Get the number of unique elements
    int k = st.size();

    int index = 0;
    // 4. Copy unique elements from set to array
    for(int val : st){
        nums[index++] = val;
    }

    // 5. Return the number of unique elements
    return k;
}

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = removeDuplicates(nums);
    cout <<  k << endl;

    return 0;
}