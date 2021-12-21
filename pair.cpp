#include<bits/stdc++.h>
using namespace std ;
//pair is a kind of class, used to store two values which can be  of any data type .
//pair is used to maintain relation between two objects 
int main(){
    pair<int,string>p;
    //p = make_pair(2,"abc");
    p = {2,"abc"};
    pair<int , string > &p1=p;  // p1 =p it is not by reference .
    p1.first =3;
    cout<< p.first << " "<< p.second << endl;
    int a[]= {1,2,3};
    int b[]={2,3,4};
    pair<int,int>p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]);
    for(int i =0 ; i<3 ; i++){
        cout<<p_array[i].first <<" "<<p_array[i].second<<endl;
    }
}//cin>> p.first;