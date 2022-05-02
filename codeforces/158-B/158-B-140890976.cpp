#include <iostream>
using namespace std;
#define trp int t;cin>>t;while(t--)
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define ll long long
#define mx 1e8+2

int x;
int a[5];
int main()
{
	trp{
		cin>>x,a[x]++;
	}
	cout<<a[4]+a[3]+(a[2]*2+max(a[1]-a[3],0)+3)/4;
}