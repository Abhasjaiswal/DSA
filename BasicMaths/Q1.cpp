#include<iostream>

using namespace std;

int countDigit(int n) {
        if(n==0){
            return 1;
        }

        int count=0;

        while(n>0){
            n = n/10;
            count++;

        }
        return count;

    }

int main(){
    int n;
    cin>>n;
    int digits =countDigit(n);
    cout<<digits;
    return 0;
}