// Multiset Basic Functions 1
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main(){
    multiset<char> MS; // Empty Multiset initialisation
    cout<<"No. of elements in Multiset = "<<MS.size()<<endl; // Checking Size of Multiset
    // Adding elements to multiset
    MS.insert('K');
    MS.insert('S');
    MS.insert('K');
    MS.insert('T');
    MS.insert('T');
    // Rechecking Size
    cout<<"No. of elements after insertion = "<<MS.size()<<endl;
    // Displaying Multiset elements using iterator
    multiset<char>::iterator I1; // Iterator Declaration
    cout<<"The Multiset Elements are....."<<endl;
    for(I1 = MS.begin();I1 != MS.end();I1++){
        cout<<*I1<<" ";
    }
    cout<<endl;

    multiset<char>::iterator I2; // for finding any element inside multiset
    I2 = MS.find('S');
    // checking if the element exists
    if(I2 == MS.end()) cout<<"Element not present on multiset"<<endl;
    else cout<<"Element present on multiset"<<endl;

    // Delete all instances of an element from multiset
    MS.erase('K');
    // Delete a instance of an element from multiset
    MS.erase(MS.find('S'));
    cout<<"After deletion The Multiset Elements are....."<<endl;
    for(I1 = MS.begin();I1 != MS.end();I1++){
        cout<<*I1<<" ";
    }
    cout<<endl;
    return 0;
}