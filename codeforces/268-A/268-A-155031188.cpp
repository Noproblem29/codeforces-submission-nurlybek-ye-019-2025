#include<bits/stdc++.h>
#pragma optimize ("g",on)
#pragma GCC optimize ("inline")
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("03")
#pragma comment(linker, "/stack:200000000")
// #pragma warning(disable : 4996)
using namespace std;
const int N=2e5+5;
#define all(x) (x).begin(), (x).end()
#define forn(i, n) for(int i=0; i < (n); ++i)
#define forauto(i, n) for(int (i):(n));
#define scanfor(a, n) for(int i=0;i < (n); ++i)scanf("%lld",(a)+i)
#define int long long
#define pb push_back
#define NO {cout<<0<<endl;return;}
int n;
int h[31],a[31];
void Press_Shift_CMD_B(){
    cin>>n;
    scanfor(h,n),scanf("%lld",a+i);
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && h[i]==a[j]){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.ti e(0);
    int t=1;
    // cin>>t;
    while(t--)Press_Shift_CMD_B();
}