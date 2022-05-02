#include <bits/stdc++.h>
using namespace std;
#define int long long
int k,r;
void aibek_Press_F(){
    cin>>k>>r;
    int b=1;
    while(k*b%10!=0){
        b++;
    }
    int ans=b;
    b=1;
    while(k*b%10-r!=0 and b<ans){
        b++;
    }
    if(k*b%10-r==0){
        ans=b;
    }
    cout<<min(ans,b)<<endl;
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