/**
 *    author:  nurlybek-ye-019-2025
 *    created: 22.04.2022 18:41:02       
**/
#include<bits/stdc++.h>
#pragma optimize ("g",on)
#pragma GCC optimize ("inline")
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize ("03")
#pragma comment(linker, "/stack:200000000")
// #pragma warning(disable : 4996)
using namespace std;
const int N=4e5+25;
#define all(x) (x).begin(), (x).end()
#define bll(x) (x),(x)+n
#define forn(i, n) for(int i = 0; i < (n); i++)
#define int long long
int n,k;
void Press_Shift_CMD_B(){
    cin>>n;
    
    cout<<8+(n&1)<<' '<<n-8-(n&1)<<endl;
}

 
signed main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.ti e(0);
    int t=1;
    // cin>>t;
    while(t--)Press_Shift_CMD_B();
}