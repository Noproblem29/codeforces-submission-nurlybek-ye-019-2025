#include <bits/stdc++.h>
#pragma optimize ("g",on)
#pragma GCC optimize ("inline")
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("03")
#pragma comment(linker, "/stack:200000000")
#pragma warning(disable : 4996)
using namespace std;
const int N=1e5+25;
#define all(x) (x).begin(), (x).end()
#define bll(x) (x)+1, (x)+n+1
#define forn(i, n) for(int i=0; i < (n); ++i)
#define forauto(i, n) for(int (i):(n));
#define scanfor(a, n) for(int i=0;i < (n); ++i)scanf("%lld",&a[i])
#define int long long
#define pb push_back
#define NO {cout<<"No\n";return;}
#define YES {cout<<"Yes\n";return;}
int pref[N];
void Press_Shift_CMD_B(){
    int n;
    cin>>n;
    int mn=INT_MAX;
    int mx=-1;
    int a[n];
    scanfor(a,n),mn=min(mn,a[i]),mx=max(mx,a[i]);

    int cnt1=0,cnt2=0;
    forn(i,n){
        cnt1+=(a[i]==mn);
        cnt2+=(a[i]==mx);
    }
    cout<<mx-mn<<' ';
    if(mn==mx){
        cout<<n*(n-1)/2;
    }
    else{
        cout<<cnt1*cnt2;
    }
    cout<<'\n';
}

signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.ti e(0);
    int t=1;
    // cin>>t;
    while(t--)Press_Shift_CMD_B();
    return 0;
}