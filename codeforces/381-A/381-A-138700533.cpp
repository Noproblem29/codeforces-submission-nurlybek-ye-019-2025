#include <iostream>

using namespace std;

int main(){
    int n,x=1,y,c=1,ser=0,dim=0,rec=0;
    cin>>n;
    y=n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        if(a[x]>a[y]){
            if(rec==0){
                ser+=a[x];
                x++;
                rec=1;
            }
            else{
                dim+=a[x];
                x++;
                rec=0;
            }
        }
        else if(a[x]<a[y]){
            if(rec==0){
                ser+=a[y];
                y--;
                rec=1;
            }
            else{
                dim+=a[y];
                y--;
                rec=0;
            }
        }
        else{
            if(rec==0){
                ser+=a[x];
                rec=1;
            }
            else{
                dim+=a[x];
                rec=0;
            }
        }
    }
    cout<<ser<<" "<<dim;
}