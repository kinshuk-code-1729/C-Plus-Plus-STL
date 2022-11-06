// Basic Functions in unordered maps
#include<iostream>
#include<string>
#include<unordered_map>
#include<iterator>
using namespace std;
int main(){
    unordered_map<int, string> uom; // Empty Unordered Map initialisation
    unordered_map<int, string>:: iterator i; // empty Unordered Map iterator
    // Inserting pairs in unordered set
    uom.insert(make_pair(1,"Hell"));
    uom.insert(make_pair(2,"to"));
    uom.insert(make_pair(3,"Heaven"));
    uom.insert(make_pair(4,"Comparison"));

    cout<<"Size of unordered map = "<<uom.size()<<endl; // Checking Size of unordered map
    // Iterating over unordered map
    for(i = uom.begin();i != uom.end();i++){
        cout<<"Key is "<<i->first<<" and value is "<<i->second<<endl;
    }
    i = uom.find(3);
    if(i != uom.end()) cout<<"Value of key "<<i->first<<" is "<<i->second<<endl;
    uom.erase(3);
    for(i = uom.begin();i != uom.end();i++){
        cout<<"Key is "<<i->first<<" and value is "<<i->second<<endl;
    }
    return 0;
}