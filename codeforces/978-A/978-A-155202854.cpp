#include <bits/stdc++.h>
#pragma optimize ("g",on)
#pragma GCC optimize ("inline")
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("03")
#pragma comment(linker, "/stack:200000000")
#pragma warning(disable : 4996)
using namespace std;
const int N=2e5+25;
#define all(x) (x).begin(), (x).end()
#define bll(x) (x)+1, (x)+n+1
#define forn(i, n) for(int i=0; i < (n); ++i)
#define forauto(i, n) for(int (i):(n));
#define scanfor(a, n) for(int i=0;i < (n); ++i)scanf("%lld",&a[i])
#define int long long
#define pb push_back
#define NO {cout<<"NO\n";return;}
#define YES {cout<<"YES\n";return;}

void Press_Shift_CMD_B(){
    int n;
    cin>>n;
    int cnt[1025]={0};
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    deque<int> v;
    for(int i=n-1;i>=0;i--){
        cnt[a[i]]++;
        if(cnt[a[i]]==1){
            v.push_front(a[i]);
        }
    }
    cout<<v.size()<<endl;
    for(auto i:v){
        cout<<i<<' ';
    }
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