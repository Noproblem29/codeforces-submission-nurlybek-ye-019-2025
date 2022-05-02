#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,m;
void aibek_Press_F(){
    cin>>n>>m;
    int home=1;
    int ans=0;
    for(;m--;){
        int x;
        cin>>x;
        if(home<x){
            ans+=x-home;
            home=x;
        }
        else if(home>x){
            ans+=(n-home+1)+(x-1);
            home=x;
        }
    }
    cout<<ans<<endl;

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