#include <iostream>
using namespace std;
#define ll long long
void solve(){
    ll n,x,even=0;
    cin>>n>>x;
    ll a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0)
        even++;
    }
    if(x%2){
        if(even%2)
        cout<<even/2+1<<endl;
        else
        cout<<even/2<<endl;
    }
    else{
        if(even!=n)
        cout<<even<<endl;
        else
        cout<<-1<<endl;
        
    }
}
int main() {
	// your code goes here
	int a;
	cin>>a;
	while(a--)
	solve();
	return 0;
}
