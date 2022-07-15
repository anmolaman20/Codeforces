#include<bits/stdc++.h>
using namespace std;
void solve(){
    string str;cin>>str;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    if(str=="yes"){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}