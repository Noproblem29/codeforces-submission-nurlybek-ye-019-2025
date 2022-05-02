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
void Press_Shift_CMD_B(){
    int n;
    cin>>n;
    int a[n+2][n+2];
    memset(a,0,sizeof(a));
    for(int i=1;i<=n;i++){
        a[i][1]=1;
        a[1][i]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 or j==1){

            }
            else{
            a[i][j]=a[i-1][j]+a[i][j-1];
            //cout<<a[i][j]<<' ';
            }
        }
        //cout<<endl;
    }
    cout<<a[n][n]<<endl;
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