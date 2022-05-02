#include<bits/stdc++.h>
#pragma optimize ("g",on)
#pragma GCC optimize ("inline")
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("03")
#pragma comment(linker, "/stack:200000000")
// #pragma warning(disable : 4996)
using namespace std;
const int N=3e4+5;
#define all(x) (x).begin(), (x).end()
#define bll(x) (x), (x)+n
#define forn(i, n) for(int i=0; i < (n); ++i)
#define forauto(i, n) for(int (i):(n));
#define scanfor(a, n) for(int i=1;i <= (n); ++i)scanf("%lld",(a)+i)
#define int long long
#define pb push_back
#define NO {cout<<"NO\n";return;}
#define YES {cout<<"YES\n";return;}
int n;
int a[N];
void Press_Shift_CMD_B(){
    int t;
    cin>>n>>t;
    scanfor(a,n-1);
    a[n]=1;
    for(int i=1;i<=n;i+=a[i]){
        if(i==t)YES
    }
    NO
}
signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.ti e(0);
    int t=1;
    // cin>>t;
    while(t--)Press_Shift_CMD_B();
}