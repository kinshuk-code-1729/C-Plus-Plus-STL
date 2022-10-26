// Various Iterators in Multisets
#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> Int_MS;
    Int_MS.insert(45);
    Int_MS.insert(68);
    Int_MS.insert(73);
    Int_MS.insert(29);
    Int_MS.insert(61);
    Int_MS.insert(54);
    multiset<int>::iterator I1; // Multiset iterator declaration
    multiset<int>::reverse_iterator I2; // Reverse Iterator

    /* Beginning to End Traversal */
    // varying iterators
    cout<<"Iterating through Front Iterators : ";
    for(I1 = Int_MS.begin();I1 != Int_MS.end();I1++){
        cout<<*I1<<" ";
    }
    cout<<endl;
    // constant iterators
    cout<<"Iterating through Constant Front Iterators : ";
    for(I1 = Int_MS.cbegin();I1 != Int_MS.cend();I1++){
        cout<<*I1<<" ";
    }
    cout<<endl;
    /* End to Beginning Traversal */
    // varying reverse iterators
    cout<<"Iterating through Reverse Iterators : ";
    for(I2 = Int_MS.rbegin();I2 != Int_MS.rend();I2++){
        cout<<*I2<<" ";
    }
    cout<<endl;
    // constant reverse iterators
    cout<<"Iterating through Constant Reverse Iterators : ";
    for(I2 = Int_MS.crbegin();I2 != Int_MS.crend();I2++){
        cout<<*I2<<" ";
    }
    cout<<endl;
    return 0;
}