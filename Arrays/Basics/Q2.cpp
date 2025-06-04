#include<iostream>

using namespace std;

int countOdd(int arr[], int n){
    int count =0;

    for(int i=0; i<=n-1;i++){
        if(arr[i]%2==1){
            count++;
        }
    }
    return count;
}

int main(){
    int n = 5;
    int arr[] ={1,2,3,4,5};
    int count = countOdd(arr,n);
    cout<<count;
    

}