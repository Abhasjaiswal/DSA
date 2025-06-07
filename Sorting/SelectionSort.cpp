#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int mini = i;
        for(int j=i; j<=n-1;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i]=temp;

    }
}

int main(){
    int n = 5;
    int arr[] = {13,46,24,52,20,9};

    selectionSort(arr,n);
    for(int i=0; i<=n;i++){
        cout<<arr[i]<<" ";
    }
}

// Time Complexity: O(n^2)
