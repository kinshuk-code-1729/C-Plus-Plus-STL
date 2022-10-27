// code to demonstrate relational operations on multisets : “==“ , “!=” , “<” , “<=” , “>” , “>=”
#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> ims1;
    ims1.insert(6);
    ims1.insert(8);
    ims1.insert(11);
    ims1.insert(14);
    ims1.insert(20);

    multiset<int> ims2;
    ims2.insert(7);
    ims2.insert(24);
    ims2.insert(29);
    ims2.insert(47);
    ims2.insert(71);

    if(ims1 == ims2) cout<<"Multisets are equal"<<endl;
    else if (ims1 != ims2) cout<<"Multisets are not equal"<<endl;
    if(ims1 != ims2){
        if(ims1 < ims2) cout<<"2nd multiset is greater"<<endl;
        else if(ims1 > ims2) cout<<"1st multiset is greater"<<endl;
    }
    return 0;
}