#include<iostream>

using namespace std;


bool isSorted(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[i]){
                return false;
            }
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

// Time Complexity = O(n^2)
// Space Complexity = O(1)