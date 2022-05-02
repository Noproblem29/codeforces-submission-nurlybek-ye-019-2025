#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<n/2<<endl;
    while(n!=0){
        if(n-3==0){
            cout<<3<<" ";
            n-=3;
        }
        if(n-2>=0){
            n-=2;
            cout<<2<<" ";
        }
    }
    
}