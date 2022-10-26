// Multiset Basic Functions 2
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main(){
    multiset<string> MS; // First MultiSet
    cout<<"No. of elements initially = "<<MS.size()<<endl;
    MS.insert("Hell");
    MS.insert("to");
    MS.insert("Heaven");
    MS.insert("Comparison");
    cout<<"Now no. of elements = "<<MS.size()<<endl;
    multiset<string>::iterator I1;
    cout<<"Elements of 1st multiset are....."<<endl;
    for(I1 = MS.begin();I1 != MS.end();I1++){
        cout<<*I1<<" ";
    }
    cout<<endl;
    // Second MultiSet
    multiset<string,greater<string>> MS2(MS.begin(),MS.end());
    cout<<"Elements of 2nd multiset are....."<<endl;
    for (I1 = MS2.begin(); I1 != MS2.end(); I1++){
        cout<<*I1<<" ";
    }
    cout<<endl;  
    // Deletion of a range of elements from multiset
    MS2.erase(MS2.find("Heaven"),MS2.end());
    cout<<"Elements of 2nd multiset after deletion....."<<endl;
    for (I1 = MS2.begin(); I1 != MS2.end(); I1++){
        cout<<*I1<<" ";
    }
    cout<<endl;
    return 0;
}