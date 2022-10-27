// Observers in Multisets : key_comp() & value_comp()
#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> Int_MS;
    multiset<int>::key_compare comp = Int_MS.key_comp(); // Using key_comp()

    Int_MS.insert(98);
    Int_MS.insert(34);
    Int_MS.insert(56);
    Int_MS.insert(56);
    Int_MS.insert(64);
    Int_MS.insert(56);

    int last = *Int_MS.rbegin(); // Stores last value of multiset
    multiset<int>::iterator I = Int_MS.begin();

    do
    {
        cout<<*I<<" ";
    } while(comp(*(++I),last));

    return 0;    
}