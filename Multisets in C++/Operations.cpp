// Operations on Multisets : find(),count(), lower_bound(),upper_bound(),equal_range().
#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> Int_MS;
    Int_MS.insert(98);
    Int_MS.insert(34);
    Int_MS.insert(56);
    Int_MS.insert(56);
    Int_MS.insert(64);
    Int_MS.insert(56);

    multiset<int>::iterator I1;
    multiset<int>::iterator I2;

    I1 = Int_MS.find(34);
    I2 = Int_MS.find(47);

    if(I1 != Int_MS.end()) cout<<*I1<<" is present in the multiset"<<endl; // 34 found
    if(I2 != Int_MS.end()) cout<<*I2<<" is present in the multiset"<<endl; // 47 not found

    int c1 = Int_MS.count(56);
    int c2 = Int_MS.count(47);

    cout<<"56 is present "<<c1<<" times"<<endl;
    cout<<"47 is present "<<c2<<" times"<<endl;

/* lower_bound() returns an iterator to the first element having value equal to parameter if present ,
   else it returns an iterator to the next greater element and if next greater element also not found then returns an iterator to the end. */
    I1 = Int_MS.lower_bound(56);
    I2 = Int_MS.lower_bound(104);

    if(I1 != Int_MS.end()) cout<<"Lower Bound on 56 gives "<<*I1<<endl;
    else cout<<"No lower bound found on 56"<<endl;

    if(I2 != Int_MS.end()) cout<<"Lower Bound on 104 gives "<<*I2<<endl;
    else cout<<"No lower bound found on 104"<<endl;
    
/*upper_bound() returns an iterator the next greater element if greater element is found else it returns an iterator to the end. */
    I1 = Int_MS.upper_bound(47);
    I2 = Int_MS.upper_bound(104);

    if(I1 != Int_MS.end()) cout<<"Upper Bound on 47 gives "<<*I1<<endl;
    else cout<<"No upper bound found on 47"<<endl;

    if(I2 != Int_MS.end()) cout<<"Upper Bound on 104 gives "<<*I2<<endl;
    else cout<<"No upper bound found on 104"<<endl;

    auto I3 = Int_MS.equal_range(34); 
    // returns an iterator of pairs ( lower & upper bound) that includes all the elements in the container which have a key equivalent to this element.
    cout<<"Equal Range on 34 is : ";
    cout<<*I3.first<<" to ";
    cout<<*I3.second<<endl;

    return 0;
}