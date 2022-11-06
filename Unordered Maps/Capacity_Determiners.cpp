// Various Capacity Determiners in Unordered Maps : size(),empty(),max_size().
#include<iostream>
#include<string>
#include<unordered_map>
#include<iterator>
using namespace std;
int main(){
    unordered_map<int, int> ump;

    ump.insert(make_pair(1,11));
    ump.insert(make_pair(1,22));
    ump.insert(make_pair(3,33));
    ump.insert(make_pair(4,44));
    ump.insert(make_pair(5,55));

    if(ump.empty()) cout<<"Unordered Map is Empty"<<endl;
    else cout<<"Unordered Map is not Empty"<<endl;
    
    cout<<"Number of elements inside unordered map = "<<ump.size()<<endl;
    cout<<"Maximum Capacity of unordered map = "<<ump.max_size()<<endl;
    return 0;
}