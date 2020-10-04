#include<bits/stdc++.h>
#define ll long long
using namespace std;

int b[100000];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,i,j,x,a[100000],max,c;
    cin>>t;
    unordered_map<int,int> umap;
    b[0]=0;
    while(t--){
        max=0;
        cin>>n;
        if(n>20000){for(i=0;i<n;i++){
            cin>>x;a[i]=x;
        }
        for(i=1;i<n;i++){
            c=0;
            if(a[i]==1) b[i]=i;
            else{for(j=i-1;j>=0;j--){
                if(a[j]==a[i]){
                    c=b[j]+1+c;
                    b[i]=c;
                    if(max<b[i]) max=b[i];
                    break;
                }
                else if((a[j]%a[i])==0) c++;
            }
            b[i]=c;
            if(max<b[i]) max=b[i];
            }
        }
        cout<<max<<endl;
        }
        else{
        umap.clear();
        vector<int> a,b;
        //cin>>n;
        for(i=0;i<n;i++){
            cin>>x;
            a.push_back(x);
            umap.insert({x,0});
        }
        for(i=0;i<n-1;i++){
            x=sqrt(a[i]);
            if((x*x)>a[i]) x=x-1;
            for(j=1;j<=x;j++){
                if((a[i]%j)==0){
                    if((a[i]/j)==j){
                        if(umap.find(j)!=umap.end()) umap[j]++;
                    }
                    else{
                        if(umap.find(j)!=umap.end()) umap[j]++;
                        if(umap.find(a[i]/j)!=umap.end()) umap[a[i]/j]++;
                    }
                }
            }
            b.push_back(umap[a[i]]-1);
            umap.erase(a[i]);
        }
        b.push_back(umap[a[n-1]]);
        if(*max_element(b.begin(),b.end())>=0) cout<<*max_element(b.begin(),b.end())<<endl;
        }
    }
    return 0;
}
