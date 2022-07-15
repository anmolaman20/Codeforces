#include<bits/stdc++.h>
using namespace std;
void rotateMatrix(vector<vector<int>>&v,int n){
    for(int i=0;i<n/2;i++){
        for(int j=i;j<n-i-1;j++){
            int ptr = v[i][j];
            v[i][j] = v[n - 1 - j][i];
            v[n - 1 - j][i] = v[n - 1 - i][n - 1 - j];
            v[n - 1 - i][n - 1 - j] = v[j][n - 1 - i];
            v[j][n - 1 - i] = ptr; 
        }
    }
}
void solve(){
    int n;
    cin>>n;
    int ans=0;
    vector<vector<int>>v(n,vector<int>(n,0)),v1(n,vector<int>(n,0)),v2(n,vector<int>(n,0)),v3(n,vector<int>(n,0));
 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char ch;
            cin>>ch;
            v[i][j]=ch-'0';
        }
    }
    v1=v;
    rotateMatrix(v1,n);
    v2=v1;
    rotateMatrix(v2,n);
    v3=v2;
    rotateMatrix(v3,n);
 
    for(int i=0;i<(n+1)/2;i++){
        for(int j=0;j<n/2;j++){
            int one=0,zero=0;
            if(v[i][j]==1){
                one++;
            }
            else{
                zero++;
            }
            if(v1[i][j]==1){
                one++;
            }
            else{
                zero++;
            }
            if(v2[i][j]==1){
                one++;
            }
            else{
                zero++;
            }
            if(v3[i][j]==1){
                one++;
            }
            else{
                zero++;
            }
            ans+=min(one,zero);
        }
    }
    cout<<ans<<endl;

    
}
int main(){
    int t;cin>>t;
    while(t--) solve();
return 0;
}