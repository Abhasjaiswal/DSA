#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int maximum =0;
    int count=0;

    for(int i=0;i<nums.size();i++){
        if(nums[i]==1){
            count++;
            maximum = max(count,maximum);
        }else{
            count=0;
        }
    }
    return maximum;
}

int main(){
    vector<int> nums = {1,1,1,2,3,4,5,1,1,1,1,1,1,1};
    int maxi = findMaxConsecutiveOnes(nums);
    cout<<maxi;
}
