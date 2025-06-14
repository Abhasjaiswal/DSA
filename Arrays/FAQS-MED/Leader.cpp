// Leaders in an Array
// Approach 
// Iterate through each element of the array with the variable let's say i and take a boolean variable leader set at true initially which will tell if nums[i] is a leader or not.
// For each i, iterate through the elements to the right (from i+1 to the end of the array) with the variable j & check if nums[j] is greater than nums[i], if so, reinitialize the variable leader as false and break.
// After exiting from the inner loop, check if leader equals true, if so add nums[i] to ans vector. Finally return the answer vector.

#include<bits/stdc++.h>
#include<iostream>

using namespace std;

vector<int> leaders(vector<int>&nums){

    vector<int> ans;
    for(int i=0; i<nums.size();i++){
        bool leader = true;
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]>=nums[i]){
                leader= false;
                break;
            }
        }

        if(leader){
            ans.push_back(nums[i]);
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {1, 2, 5, 3, 1, 2};

    vector<int> leader = leaders(nums);

    for(int i=0;i<leader.size();i++){
        cout<<leader[i]<<endl;
    }
    return 0;
}