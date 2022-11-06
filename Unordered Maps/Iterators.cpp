// Iterators in Unordered Maps.
#include<iostream>
#include<string>
#include<unordered_map>
#include<iterator>
using namespace std;
int main(){
    unordered_map<int, int> um;

    um.insert(make_pair(1,1));
    um.insert(make_pair(2,8));
    um.insert(make_pair(3,27));
    um.insert(make_pair(4,64));
    um.insert(make_pair(5,125));
    
    // Iterating using 'begin()' and 'end()'
    for(auto i = um.begin();i != um.end();i++){
        cout<<"Key is "<<i->first<<" and value is "<<i->second<<endl;
    }
    
    // Iterating using 'cbegin()' and 'cend()'
    for(auto i2 = um.cbegin();i2 != um.cend();i2++){
        cout<<"Key is "<<i2->first<<" and value is "<<i2->second<<endl;
    }
    return 0;
}