#include<iostream>

using namespace std;

bool isSorted(int arr[], int n){
    for(int i = 1; i<=n-1; i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[]={1,2,3,4};
    int n=4;

    bool sorted = isSorted(arr,n);
    cout<<sorted;
}

// Time Complexity = O(n)
// Space Complexity = O(1)