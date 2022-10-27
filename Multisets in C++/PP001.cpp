// Given an array A, find the count of all elements that appear in it.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[] = {5,8,5,5,8,57,36,8,8,7,4,4,17};
    int n = sizeof(A) / sizeof(A[0]);
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(A[i]);
    }

    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        ms.insert(A[i]);
    }
    
    set<int>::iterator I;
    for(I = s.begin();I != s.end();I++){
        cout<<*I<<" occurs "<<ms.count(*I)<<" times"<<endl;
    }
    return 0;
}