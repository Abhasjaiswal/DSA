#include<iostream>

using namespace std;

int countOddDigit(int n) {

    int countOdd = 0;
    while(n>0){
        int lastDigit = n%10;
        if(lastDigit%2==1){
            countOdd++;
        }
        n = n/10;
    }
    return countOdd;
    }

int main(){
    int n;
    cin>>n;
    int count = countOddDigit(n);
    cout<<count;
}