// Various Modifiers in Unordered Maps.
/* 1.insert(make_pair(key,value))
   2.erase()
   3.clear()
   4.emplace_hint(position, key, value)
   5.swap(): */
#include<iostream>
#include<string>
#include<unordered_map>
#include<iterator>
using namespace std;
int main(){
    unordered_map<int, int> ump;

    ump.insert(make_pair(1,6));
    ump.insert(make_pair(2,12));
    ump.insert(make_pair(3,18));
    ump.insert(make_pair(4,24));
    ump.insert(make_pair(5,30));

    for(auto i = ump.begin();i != ump.end();i++){
        cout<<"Key is "<<i->first<<" and value is "<<i->second<<endl;
    }

    ump.erase(3);
    cout<<"After deleting an element with key 3"<<endl;
    for(auto i = ump.begin();i != ump.end();i++){
        cout<<"Key is "<<i->first<<" and value is "<<i->second<<endl;
    }

    ump.emplace(6,36);
    cout<<"After Emplacing with key 6"<<endl;
    for(auto i = ump.begin();i != ump.end();i++){
        cout<<"Key is "<<i->first<<" and value is "<<i->second<<endl;
    }

    ump.emplace_hint(ump.find(6),7,42);
    cout<<"After using emplace hint to insert element with key '7'" << endl;
    for(auto i = ump.begin();i != ump.end();i++){
        cout<<"Key is "<<i->first<<" and value is "<<i->second<<endl;
    }

    return 0;
}