#include <iostream>
using namespace std;
#define trp int t;cin>>t;while(t--)
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define ll long long
#define mx 1e8+2

int main(){
    int ok=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='-' and ok==0){
            ok=1;
        }
        else if(s[i]=='-' and ok ==1){
            cout<<2;
            ok=0;
        }
        else if(s[i]=='.' and ok == 1){
            cout<<1;
            ok=0;
        }
        else if(s[i]=='.' and ok == 0){
            cout<<0;
        }
    }
}