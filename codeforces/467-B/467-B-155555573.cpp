#include <bits/stdc++.h>
// #pragma optimize ("g",on)
// #pragma GCC optimize ("inline")
// #pragma GCC optimize ("Ofast")
// #pragma GCC optimize ("unroll-loops")
// #pragma GCC optimize ("03")
// #pragma comment(linker, "/stack:200000000")
// #pragma warning(disable : 4996)
using namespace std;
const int N=5e5+1;
#define all(x) (x).begin(), (x).end()
#define bll(x) (x)+1, (x)+n+1
#define forn(i, n) for(int i=0; i < (n); ++i)
#define forauto(i, n) for(int (i):(n));
#define scanfor(a, n) for(int i=0;i <(n); ++i)scanf("%lld",a+i)
#define int long long
#define pb push_back
#define NO {cout<<"NO\n";return;}
#define YES {cout<<"YES\n";return;}
#define sc(x) scanf("%lld",&x);
// int pref[N];
// vector<vector<int>> g(N);
// int col[N];
// bool mark[N];
// int a[N];
// int ans=0;
// int n,m;
// void dfs(int x,int from){
//     col[x]=col[from];
//     mark[x]=1;
//     if(a[x]==1){
//         col[x]++;
//     }
    
//     if(col[x]>m){
//         //ans--;
//         return;
//     }
    
//     if(a[x]==0)col[x]=0;
//     int ce=0;
//     for(int i=0;i<g[x].size();i++){
//         if(mark[g[x][i]]==0){
//             ce=1;
//             dfs(g[x][i],x);
//         }
//     }
//     if(g[x].size()==1 && ce==0)ans++;
//     //cout<<x<<' '<<g[x].size()<<'\n';
// }

int n,m,k;
void Press_Shift_CMD_B(){
    sc(n);sc(m);sc(k);
    int a[m+2];
    scanfor(a,m+1);
    int col=0;
    forn(i,m){
        if(__builtin_popcountll(a[i]^a[m])<=k){
            col++;
        }
    }
    cout<<col<<'\n';
    
}

signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(0);
    
    int t=1;
    // cin>>t;
    while(t--)Press_Shift_CMD_B();
    return 0;
}