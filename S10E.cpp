#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll int t,n,m,q,i,j,k,even,odd,even1,odd1;
    cin>>t;
    while(t--){
        odd=even=even1=odd1=0;
        ll int a[100000]={0},b[100000]={0};
        cin>>n>>m>>q;
        for(i=0;i<q;i++){
            cin>>j>>k;
            a[j-1]++;a[j-1]=a[j-1]%2;
            b[k-1]++;b[k-1]=b[k-1]%2;
        }
        for(i=0;i<n;i++){
            if(a[i]) odd++;
            else even++;
        }
        //even=n-odd;
        for(i=0;i<m;i++){
            if(b[i]) odd1++;
            else even1++;
        }
        //even1==m-odd1;
        cout<<odd1*even+even1*odd<<endl;
    }
    return 0;
}
