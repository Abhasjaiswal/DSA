#include<iostream>

using namespace std;

int linearSearch(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            return i;
        }
    }
    return -1;
}


int main() {
    vector<int> arr = {2, 3, 4, 5, 3};
    int target = 2;

    int index = linearSearch(arr, target);
    cout << index << endl;

    return 0;
}

// Time Complexity: O(N)
// Space Complexity : O(1)
// Best Time Complexity: O(1)