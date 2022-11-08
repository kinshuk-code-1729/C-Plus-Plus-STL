// Bucket Interface : bucket_count(), max_bucket_count(), bucket_size(), bucket().
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int, int> M;
    M.insert(make_pair(10,11));
    M.insert(make_pair(20,22));
    M.insert(make_pair(30,33));
    M.insert(make_pair(40,44));
    M.insert(make_pair(50,55));
    cout<<"Map has "<<M.bucket_count()<<" Buckets"<<endl;
    cout<<"Atmost the map can hold "<<M.max_bucket_count()<<" Buckets"<<endl;

    for(auto itr = M.begin(); itr != M.end(); itr++ ){
        cout<<"Element "<<itr->first<<" is present in Bucket number "<<M.bucket(itr->first)<<endl;
    }

    for (int i = 0; i < M.bucket_count(); i++){
        cout<<"Bucket "<<i<<" has "<<M.bucket_size(i)<<" elements"<<endl;
    }
    return 0;
}