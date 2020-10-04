#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,min,j,i,n;cin>>t;
    while(t--){
        min=1000000;
        cin>>n;
        int a[26]={0};
        char s[100001];cin>>s;
        for(i=0;i<n;i++){
            a[s[i]-97]++;
            if(a[s[i]-97]>=2){
                for(j=i-1;j>=0;j--){
                    if(i-j>=min) break;
                    if(s[i]==s[j] && i-j<min) min=i-j;
                }
            }
        }
        if(min!=1000000) cout<<n-min<<'\n';
        else cout<<0<<'\n';
    }
    return 0;
}
