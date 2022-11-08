// Accessing Elements in Unordered Maps using : at and [].
#include<iostream>
#include<string>
#include<unordered_map>
#include<iterator>
using namespace std;
int main(){
    unordered_map<int, int> mp;

    mp.insert(make_pair(1,4));
    mp.insert(make_pair(2,8));
    mp.insert(make_pair(3,12));
    mp.insert(make_pair(4,16));
    mp.insert(make_pair(5,20));

    cout<<"Value of key 1 is "<<mp.at(1)<<endl; // Priniting Value at key 1
    mp[1] = 91; // Modifying value at key 1
    cout<<"After Modification , Value of key 1 is "<<mp.at(1)<<endl;
    return 0;
}