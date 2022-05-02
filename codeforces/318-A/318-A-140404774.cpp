#include <iostream>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    n++;
    n=k-n/2;
    if(n>0){
        cout<<n*2;
    }
    else{
        cout<<k*2-1;
    }
}