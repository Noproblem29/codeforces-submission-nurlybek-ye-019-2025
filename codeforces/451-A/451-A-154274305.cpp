#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
void aibek_Press_F(){
    cin>>n>>m;
    
    if(min(n,m)%2==0){
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }

}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t=1;
    //cin>>t;
    while(t--){
        aibek_Press_F();
    }
    
}