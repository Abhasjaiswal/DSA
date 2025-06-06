#include<iostream>

using namespace std;


// approach 1 to reverse an array
void reverseArray(int arr[], int n){
    int temp[n];

    for(int i=0;i<=n-1;i++){
        temp[n-i-1]=arr[i];
    }

    for(int i=0; i<=n-1;i++){
        arr[i]=temp[i];
    }

}

int main(){
    int arr[]={5,6,2,1};
    int n=4;

    reverseArray(arr,n);

    for(int i =0; i<=n-1; i++){
        cout<<arr[i]<<" ";
    }
}


// time complexity : O(n) * 2
// Space complexity : O(n) 