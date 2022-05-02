#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np,a,b,e;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a=(k*l)/nl;
    b=(c*d);
    e=(p/np);
    cout<<min(min(a,b),e)/n;
}