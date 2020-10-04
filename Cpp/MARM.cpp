#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll int n,k,t,i,j,a[100000],x;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(i=0;i<n;i++) cin>>a[i];
        x=k/n;x=x%3;
        if(n%2==1 && n<=k) a[n/2]=0;
        for(j=0;j<x;j++) {for(i=0;i<n;i++){
            //if(!x) break;
            //for(j=1;j<=x;j++){
                a[i]=a[i]^a[n-i-1];
                //a[n-i-1]=a[n-i-1]^a[i];
            //}
        }}
        k=k%n;
        for(i=0;i<k;i++){
            a[i]=a[i]^a[n-i-1];
        }
        for(i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
