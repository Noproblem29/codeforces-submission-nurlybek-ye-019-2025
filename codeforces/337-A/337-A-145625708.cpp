#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,k,d=999;
    cin>>n>>m;
    k=m;
    int a[k];
    while(k--)cin>>a[k];sort(a,a+m);--n;m-=n;
    while(m--)d=min(d,a[m+n]-a[m]);cout<<d;
}