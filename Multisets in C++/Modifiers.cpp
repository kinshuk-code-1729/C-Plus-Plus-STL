// Various Modifiers in Multisets.
/* 1.insert(const g)
   2.erase() and erase(find(const g))
   3.clear()
   4.emplace(const g) and emplace_hint(position, const g)
   5.swap(): */
#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> Int_MS;
    multiset<int>::iterator I1;
    Int_MS.insert(9);
    Int_MS.insert(34);
    Int_MS.insert(73);
    Int_MS.insert(73);
    Int_MS.insert(52);
    Int_MS.insert(73);
    for(I1 = Int_MS.begin();I1 != Int_MS.end();I1++){
        cout<<*I1<<" ";
    }
    cout<<endl;
    Int_MS.erase(Int_MS.find(73)); // deletion of one instance of 73
    for(I1 = Int_MS.begin();I1 != Int_MS.end();I1++){
        cout<<*I1<<" ";
    }
    cout<<endl;
    Int_MS.emplace(49); // Emplacing 49
    for(I1 = Int_MS.begin();I1 != Int_MS.end();I1++){
        cout<<*I1<<" ";
    }
    cout<<endl;
    Int_MS.emplace_hint(Int_MS.find(27),98); // Emplace_Hint 27
    for(I1 = Int_MS.begin();I1 != Int_MS.end();I1++){
        cout<<*I1<<" ";
    }
    cout<<endl;
    Int_MS.clear();
    return 0;
}