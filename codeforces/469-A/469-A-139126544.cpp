#include <bits/stdc++.h>

using namespace std;

int main(){
    set<long long> s;
    long long n,p;
    cin>>n>>p;
    long long x,y;
    for(int i=0;i<p;i++){
        cin>>x;
        s.insert(x);
        
    }
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>y;
        s.insert(y);
    }
    if(s.size()>=n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
}