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
#define scanfor(a, n) for(int i=1;i <= (n); ++i)scanf("%lld",&a[i])
#define int long long
#define pb push_back
#define NO {cout<<"No\n";return;}
#define YES {cout<<"Yes\n";return;}
int pref[N];
vector<vector<int>> g(N);
int col[N];
bool mark[N];
int a[N];
int ans=0;
int n,m;
void dfs(int x,int from){
    col[x]=col[from];
    mark[x]=1;
    if(a[x]==1){
        col[x]++;
    }
    
    if(col[x]>m){
        //ans--;
        return;
    }
    
    if(a[x]==0)col[x]=0;
    int ce=0;
    for(int i=0;i<g[x].size();i++){
        if(mark[g[x][i]]==0){
            ce=1;
            dfs(g[x][i],x);
        }
    }
    if(g[x].size()==1 && ce==0)ans++;
    //cout<<x<<' '<<g[x].size()<<'\n';
}
void Press_Shift_CMD_B(){
    
    cin>>n>>m;
   
    scanfor(a,n);
    //ans=n-1;
    for(int i=0,x,y;i<n-1;i++){
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    //cout<<endl;
    dfs(1,1);
    cout<<ans<<endl;
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