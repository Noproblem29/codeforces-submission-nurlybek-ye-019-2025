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
int a[100005];
void Press_Shift_CMD_B(){
    int n,x;
    cin>>n;
    map<int,int> m1,m2,m3;
    for(int i=0;i<n;i++){
        cin>>x;
        m1[x]++;
    }
    for(int i=0;i<n-1;i++){
        cin>>x;
        m2[x]++;
    }
    for(auto i:m1){
        if(m2[i.first]!=i.second){
            cout<<i.first<<'\n';
            break;
        }
       // cout<<i.first<<' ';
    }
    // cout<<endl;
    for(int i=0;i<n-2;i++){
        cin>>x;
        m3[x]++;
    }
    for(auto i:m2){
        if(m3[i.first]!=i.second){
            cout<<i.first<<'\n';
            break;
        }
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