// Given two arrays A and B, find all the common elements between them.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[5] = {11,12,13,14,15};
    int B[7] = {7,8,9,10,11,12,13};
    int n = 5,m = 7;

    multiset<int> s;
    for(int i = 0;i < n;i++){
        s.insert(A[i]);
    }
    cout<<"Common Elements are : ";
    for(int j = 0;j < m;j++){
        if(s.find(B[j]) != s.end()){
            cout<<B[j]<<" ";
        }
    }
    return 0;
}