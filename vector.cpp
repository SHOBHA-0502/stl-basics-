#include<bits/stdc++.h>
using namespace std ;
//vector is very much similar to array ,they are continous memory blocks ,array of dynamic size .
void printvec(vector<int>&v){//just pass any vector by reference otherwise it will make the copy if that vector which take time complexity if O(n). so better to pass the actual vector 
    for(int i =0 ; i<v.size() ; i++){ //v.size()=O(1)
        cout<< v[i] << " ";
    }
       cout<<endl;
}
int main(){
    vector<int> v(10,3);
    // vecor<pair<int,int>>v;
   /* int n ;
    cin>>n;
    for(int i =0 ; i<n ; i++){
    int x;
    cin>>x;
    v.push_back(x); //O(1)
    }*/
    v.push_back(7);
    printvec(v);
    v.pop_back();
    printvec(v);
    //to copy a vector
    vector<int> v2 =v;// if u change v then v2 will remain unchange .O(n)
     v2.push_back(5);
     printvec(v);
     printvec(v2);


}