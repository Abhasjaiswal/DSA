// Problem:
// Given an integer array 'nums', move all the 0's to the end of the array.
// The relative order of the non-zero elements must be maintained.
// The operation must be done in-place (without making a full copy of the array).

// Brute Force Approach:
// 1. Create a temporary array to store all non-zero elements.
// 2. Traverse the original array and copy each non-zero element to the temporary array.
// 3. Copy the elements from the temporary array back to the original array starting from index 0.
// 4. Fill the remaining positions in the original array with 0.


#include<bits/stdc++.h> 
#include<iostream>

using namespace std;

void moveZeroes(vector<int>& nums) {
    
    int n= nums.size();

    // step1 as mentioned above
    vector<int> temp;

    // step2:
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            temp.push_back(nums[i]);
        }
    }

    int nonZero = temp.size();
    // step3:
    for(int i=0;i<nonZero;i++){
        nums[i]=temp[i];
    }

    // And finally,
    for(int i=nonZero;i<n;i++){
        nums[i]=0;
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    moveZeroes(nums);

    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}