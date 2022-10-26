// Various Capacity Determiners in Multisets : size(),empty(),max_size().
#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> Int_MS;
    if(Int_MS.empty()) cout<<"Empty Multiset"<<endl;
    Int_MS.insert(57);
    Int_MS.insert(36);
    Int_MS.insert(74);
    Int_MS.insert(96);
    Int_MS.insert(49);
    Int_MS.insert(28);
    cout<<"Size of the multiset is = "<<Int_MS.size()<<endl;
    cout<<"Maximum Size of the multiset is = "<<Int_MS.max_size()<<endl;
    return 0;
}