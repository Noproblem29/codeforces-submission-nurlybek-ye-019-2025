#include <bits/stdc++.h>

using namespace std;
bool e[10025]={0};
int main(){
    vector<int> a;
    int s,n,v=5,x,y;
    cin>>s>>n;
    vector<pair<int,int>> b;
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        b.push_back(make_pair(x,y));
    }
    sort(b.begin(), b.end());
    while(v--){
        for(int i=0;i<n;i++){
            if(s>b[i].first and e[i]!=1){
                a.push_back(1);
                e[i]=1;
                s+=b[i].second;
            }
        }
    }
    if(a.size()>=n){
        cout<<"YES";
    }
    
    else{
        cout<<"NO";
    }
}