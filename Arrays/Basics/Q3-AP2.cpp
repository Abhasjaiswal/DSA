#include<bits/stdc++.h>
#include<iostream>

using namespace std;


void reverseArray(int arr[],int n){
    int left =0;
    int right =n-1;

    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }

}

int main(){
    int arr[] = {6,7,8,2};
    int n= 4;

    reverseArray(arr,n);

    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}