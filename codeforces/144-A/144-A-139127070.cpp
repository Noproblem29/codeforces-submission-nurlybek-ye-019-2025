#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,mx=-1,mn=100025,x=0,y=0,ans=0;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>mx){
            mx=a[i];
            x=i;
        }
    }
    for(int i=1;i<=n;i++){
        if(x!=1){
            swap(a[x-1],a[x]);
            x--;
            ans++;
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]<=mn){
            mn=a[i];
            y=i;
        }
    }
    for(int i=1;i<=n;i++){
        if(y!=n){
            swap(a[x],a[x+1]);
            y++;
            ans++;
        }
    }
    cout<<ans<<endl;
}