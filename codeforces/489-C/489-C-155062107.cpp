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
#define bll(x) (x)+1, (x)+n+1
#define forn(i, n) for(int i=0; i < (n); ++i)
#define forauto(i, n) for(int (i):(n));
#define scanfor(a, n) for(int i=0;i < (n); ++i)scanf("%lld",(a)+i)
#define int long long
#define pb push_back
#define NO {cout<<"NO\n";return;}
#define YES {cout<<"YES\n";return;}
int m,s,i,j,k;
void Press_Shift_CMD_B(){
    cin>>m>>s;
    if(s<1&&m>1 || s>9*m){
        cout<<"-1"<<' '<<"-1";
        return;
    }
    for(i=m-1,k=s;i>=0;i--){
       int j=max(0LL,k-9LL*i);
       if(j==0&&i==m-1&&k)j=1;
       
       cout<<j;
       k-=j;
    }
    cout<<' ';
    for(i=m-1,k=s;i>=0;i--){
        int a=min(9LL,k);
        cout<<a;
        k-=a;
    }

}
signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.ti e(0);
    int t=1;
    // cin>>t;
    while(t--)Press_Shift_CMD_B();
}