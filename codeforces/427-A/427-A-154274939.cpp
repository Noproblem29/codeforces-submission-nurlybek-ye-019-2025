#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
void aibek_Press_F(){
    cin>>n;
    int ans=0;
    int temp=0;
    int temp2=0;
    for(int i=0,x;i<n;i++){
        cin>>x;
        if(x==-1){
            if(temp2==0){
                temp++;
            }
            else{
                temp2--;
            }
        }
        else{
            if(temp2==0){
                if(temp!=0){
                    ans+=temp;
                    temp=0;
                }
            }
            
            temp2+=x;
        }
    }
    if(temp2==0){
                if(temp!=0){
                    ans+=temp;
                    temp=0;
                }
            }
    cout<<ans<<endl;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t=1;
    //cin>>t;
    while(t--){
        aibek_Press_F();
    }
    
}