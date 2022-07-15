#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define endl "\n"
using namespace std;
void solve(){
    int n;cin>>n;
    string s[n];
    unordered_map<string,bool>mp;
    for(int i=0;i<n;i++){
        cin>>s[i];
        mp[s[i]] = true;
    }

    string str="";
    for(int i=0;i<n;i++){
        bool flag = false;
        for(int j=1;j<s[i].length();j++){
            string pref = s[i].substr(0,j), suff = s[i].substr(j,s[i].length() - j);
            if(mp[pref] && mp[suff]){
                flag = true;
                break;
            }
        }
        if(flag){
            str+='1';
        }else{
            str+='0';
        }
    }
    cout<<str<<endl;
}
int main(){
    IOS
    int t;cin>>t;
    while(t--) solve();
return 0;
}