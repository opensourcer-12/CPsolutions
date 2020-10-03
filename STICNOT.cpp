#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

/*ll int power(ll int base,ll int exponent)
{
    if (exponent == 0) return 1;
    ll int temp = power(base, exponent/2);
    if (exponent % 2 == 0)
        return temp * temp;
    else
        return (base * temp * temp);
}*/

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i,j,n,c,b[100000],k;cin>>t;
    while(t--){
        cin>>n;
        int a[100000]={0};
        c=0;
        for(i=0;i<n-1;i++) cin>>j>>k>>a[i];
        for(i=0;i<n;i++) cin>>b[i];
        sort(a,a+n-1);sort(b,b+n);
        j=0;
        for(i=0;i<n;i++){
            if(b[i]>=a[j]){
                c++;j++;
            }
            //if(j==n-1) break;
        }
        cout<<n-c<<endl;
    }
    return 0;
}
