// Operations on Unordered Maps : find(),count(),equal_range().
#include<iostream>
#include<string>
#include<unordered_map>
#include<iterator>
using namespace std;
int main(){
    unordered_map<int, int> ump;

    ump.insert(make_pair(1,8));
    ump.insert(make_pair(2,16));
    ump.insert(make_pair(3,24));
    ump.insert(make_pair(4,32));
    ump.insert(make_pair(5,40));

    for(auto i = ump.begin(); i != ump.end(); i++){
        cout<<"Key is "<<i->first<<" and value is "<<i->second<<endl;
    }

    auto i = ump.find(3); // Finding Element with key 3
    if(i != ump.end()){
        cout<<"Element "<<i->first<<" with key "<<i->second<<" is present on unordered map"<<endl;
    }
    else cout<<"Element is 3 not present in unordered map"<<endl;

    auto i2 = ump.find(36); // Finding Element with key 36
    if(i2 != ump.end()){
        cout<<"Element "<<i2->first<<" with key "<<i2->second<<" is present on unordered map"<<endl;
    }
    else cout<<"Element 36 not present in unordered map"<<endl;

    cout<<"Map contains 4 : "<<ump.count(4)<<" times"<<endl; // Counting no. of elements with key '4'
    cout<<"Map contains 14 : "<<ump.count(14)<<" times"<<endl; // Counting no. of elements with key '14'

    auto i3 = ump.equal_range(3);
    cout<<"Equal range for 3 gives lower bound element "<<i3.first->first<<" with value = "<<i3.first->second<<endl;   
    cout<<"Equal range for 3 gives upper bound element "<<i3.second->first<<" with value = "<<i3.second->second<<endl;

    return 0;   
}