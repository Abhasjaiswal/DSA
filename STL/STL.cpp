#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void explainPair(){
    pair<int,int> pr1 = {1,2};
    cout<<pr1.first<<" "<<pr1.second;
    cout<<endl;
    pair<int,char> pr2 = {1,'a'};
    cout<<pr2.first<<" "<<pr2.second;
    cout<<endl;


    // you can also create a pair of pairs
    pair<pair<int,char>,char> pr3 = {{1,'b'},'a'};
    cout<<pr3.first.second;
    cout<<endl;

}

void explainVectors(){


    // Initialise a vector
    vector<int> v = {1,2,3,4,5,6,7,8,9};

    // Push Back
    //The push_back function adds a new element at the end of the vector. This is often used to append elements in a loop or based on certain conditions.
    v.push_back(100);
    for(int i:v){
        cout<<i<<" ";

    }


    // Front 
    //The front function returns a reference to the first element in the vector. This is useful when you need to access the starting element without modifying the vector.
    cout<<v.front();

    // Back
    // The back function returns a reference to the last element in the vector. It’s typically used when the last inserted element needs to be accessed or modified.
    cout<<v.back();

    

}

int main(){
    explainPair();
    explainVectors();
    return 0;
}