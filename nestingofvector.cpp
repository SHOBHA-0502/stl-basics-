#include<bits/stdc++.h>
using namespace std ;
/*void printvec(vector<pair<int,int>>v){
    for(int i =0 ; i<v.size();i++){
        cout<<v[i].first <<" "<< v[i].second << endl;
    }
    cout<< endl;
}
int main(){
  //  vector<pair<int,int>>v = { {1,2} ,{2,3},{3,4}};
  vector<pair<int,int> > v;
  int n;
  cin>>n;
  for(int i = 0; i<n ; i++){
      int x,y;
      cin>>x >>y ;
      v.push_back({x,y});
  }
printvec(v);
}*///////////////////   kind of 2-d vector ////////
void printvec(vector<int>&v){
    for(int i =0 ; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<< endl;
}
int main(){
    int N ;
    cin>>N;
    vector<int>v[N];
    for(int i =0 ; i<N ; i++){
        int n ;
        cin>> n ;
        for(int j =0 ; j< n ; j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i =0 ; i<N ; ++i){
        printvec(v[i]);
    }

}