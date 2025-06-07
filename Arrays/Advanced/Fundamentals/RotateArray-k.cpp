#include<bits/stdc++.h>
#include<iostream>

using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        // defining the size of the array
        int n = nums.size();
        // To avoid unnecessary rotations
        k = k % n;

        // Define a temporary array 
        vector<int> temp;

        // Push back the first k elements in a temporary array
        for(int i=0;i<k;i++){
            temp.push_back(nums[i]);
        }

        // Shifting
        for(int i =k;i<n;i++){
            nums[i-k]=nums[i];
        }

        // Push Back the temp
        for(int i=n-k;i<n;i++){
            nums[i]=temp[i-(n-k)];
        }
        
    } 
};