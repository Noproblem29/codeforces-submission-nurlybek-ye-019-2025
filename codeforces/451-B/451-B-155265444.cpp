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
#define NO {cout<<"no\n";return;}
#define YES {cout<<"YES\n";return;}
bool used[N];
void Press_Shift_CMD_B(){
    int n;
    cin>>n;
    int a[n],b[n];
    scanfor(a,n),b[i]=a[i];
    sort(a,a+n);
    int j=0,l=0,k=0;
    forn(i,n){
        if(a[i]!=b[i]){
            l=i;
            j++;
            if(j==1)k=i;
        }
    }
    reverse(b+k,b+l+1);
    for(int i=k;i<=l;i++){
        if(a[i]!=b[i])NO
    }
    cout<<"yes\n"<<k+1<<' '<<l+1<<endl;
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