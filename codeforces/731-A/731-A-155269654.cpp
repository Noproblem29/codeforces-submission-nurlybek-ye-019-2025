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
bool used[N];
void Press_Shift_CMD_B(){

    string s;
    cin>>s;
    int ans=0;
    char a='a';
    for(int i=0;i<s.size();i++){
        ans+=min(abs(a-s[i]),26-abs(a-s[i]));
        a=s[i];
    }
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