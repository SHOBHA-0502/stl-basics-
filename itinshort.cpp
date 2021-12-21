#include<bits/stdc++.h>
using namespace std ;
int main(){
    vector<int> v ={1,2,3,4,5,6,7};
    /*for(int &value :v){ //for(auto & value : v)
        cout<< value << " ";
    }
    cout<<endl;
}*/
//vector<int> :: iterator it ;== auto;
for(auto it = v.begin() ; it != v.end() ; it++){
    cout<<(*it)<< " ";
}
}