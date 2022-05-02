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
bool m[100];
void Press_Shift_CMD_B(){
    int n,x;
    cin>>n>>x;
    map<string,string> m;
    for(int i=0;i<x;i++){
        string a,b;
        cin>>a>>b;
        if(a.size()>b.size()){
            m[a]=b;
            m[b]=b;
        }
        else{
            m[b]=a;
            m[a]=a;
        }
    }
    string ans[n];
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        ans[i]=m[s];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<' ';
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