// Basic Functions in unordered maps
#include<iostream>
#include<string>
#include<unordered_map>
#include<iterator>
using namespace std;
int main(){
    unordered_map<int, int> uom;
    unordered_map<int, int>::iterator i;
    // Using Shorthand notation : [] operator for insertion
    uom[1] = 45;
    uom[2] = 55;
    uom[3] = 65;
    uom[4] = 75;
    uom[5] = 85;

    for(i = uom.begin();i != uom.end();i++){
        cout<<"Key is "<<i->first<<" and value is "<<i->second<<endl;
    }

    unordered_map<int, int> uom2(uom.begin(), uom.end()); // Creating a new unordered map using existing one
    unordered_map<int, int>::iterator i2;

    for(i2 = uom2.begin();i2 != uom2.end();i2++){
        cout<<"Key is "<<i2->first<<" and value is "<<i2->second<<endl;
    }
    i2 = uom2.find(10);
    if(i2 == uom2.end()) cout<<"The element with value 10 is not present"<<endl;

    uom2.erase(uom2.begin(),uom2.find(3));
    for(i2 = uom2.begin();i2 != uom2.end();i2++){
        cout<<"Key is "<<i2->first<<" and value is "<<i2->second<<endl;
    }
}