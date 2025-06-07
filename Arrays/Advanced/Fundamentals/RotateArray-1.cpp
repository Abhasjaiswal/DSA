// Left rotate the array by one place 

#include<iostream>

using namespace std;

void rotateArray(int arr[], int n){
    int temp = arr[0];
    for(int i=0;i<=n-1;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}

int main(){
    int n=5;
    int arr[]={1,2,3,4,5};

    rotateArray(arr,n);
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}