#include <bits/stdc++.h>
using namespace std;
#define int long long

void aibek_Press_F(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int dp[n+1];
    fill(dp,dp+n+1,-1e10);
    dp[0]=0;
    for(int i=a;i<=n;i++)dp[i]=max(dp[i],dp[i-a]+1);
	for(int i=b;i<=n;i++)dp[i]=max(dp[i],dp[i-b]+1);
	for(int i=c;i<=n;i++)dp[i]=max(dp[i],dp[i-c]+1);

    cout<<dp[n]<<endl;
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