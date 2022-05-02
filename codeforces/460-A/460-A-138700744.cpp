#include <iostream>

using namespace std;

int main(){
    int n,m,ans=0;
    cin>>n>>m;
    for(int i=1;i<=10000;i++){
        if(n==0){
            cout<<ans;
            return 0;
        }
        n--;
        ans++;
        if(i%m==0){
            n++;
        }
    }
}