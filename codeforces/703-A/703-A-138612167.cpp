#include<iostream>
using namespace std;
int main(){
    int n,a,b,x=0,y=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a>b){
            x++;
        }
        if(a<b){
            y++;
        }
    }
    if(x>y){
        cout<<"Mishka";
    }
    else if(y>x){
        cout<<"Chris";
    }
    else{
        cout<<"Friendship is magic!^^";
    }
}