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
#define NO {cout<<"NO\n";return;}
#define YES {cout<<"YES\n";return;}
int a[N];
int n,E=1e9;
void Press_Shift_CMD_B(){
    cin>>n;
    int i=0,j=0,k=0;
    for(i=0;i<n;i++)cin>>a[i];
    for(i=-1;i<=1;i++){
        for(j=-1;j<=1;j++){
            int x=a[1]+j-a[0]-i;
            int y=abs(i);
            for(k=1;k<n;k++){
                int xx=abs(a[k]-(a[0]+i+k*x));
                if(xx>1)break;y+=xx;
            }
            if(k==n)E=min(E,y);
        }
    }
    cout<<(E<1e9?E:-1)<<'\n';
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