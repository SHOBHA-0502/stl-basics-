#include<bits/stdc++.h>
using namespace std;
int main(){
    // maps stores the values in sorted order // if we are going to store string the it will store as in lexografical order 
    map<int,string> m ;
    m[1]= "abc"; // Olog(n)
    m[1]= "cdc";
    m[3]="acd";
    m[5] ="a";
    m[6]="eee";
    m.insert({4,"afg"});
    auto it = m.find(4); // O(log(n))
    m.erase(it);
    m.clear();
    //map<int,string> :: iterator it ;
    for( auto it = m.begin() ; it != m.end() ; it++){
        cout<< (*it).first << (*it).second <<endl;
    } 
    for(auto pr : m){
        cout<< pr.first << " "<< pr.second ;
    }



}