// Optimal Approach 

// Steps:

// Initialize j = -1
// → Tracks the index of the first zero in the array.

// Find First Zero:
// → Loop through the array to set j at the first zero's index.
// → If no zero is found, return early.

// Start from i = j + 1:
// → Traverse the array with i to find non-zero elements.

// Swap Non-Zero with Zero:
// → If nums[i] != 0, swap nums[i] and nums[j].
// → Increment j (it now points to the next zero).

// Repeat until the end of the array is reached.


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void moveZeroes(vector<int>& nums){

    int j=-1; 
    int n=nums.size();

    for(int i=0;i<n;i++){
        if(nums[i]==0){
            j=i;
            break;
        }
    }

    if(j==-1) return;

    for(int i=j+1;i<n;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }

}