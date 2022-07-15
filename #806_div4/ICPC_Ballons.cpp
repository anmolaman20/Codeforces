#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    string str;
    cin>>str;
    bool arr[26] = {false};
    int cnt = 0;

    for(int i=0;i<n;i++){
        if(arr[str[i]-'A']){
            cnt += 1;
        }else{
            cnt += 2;
            arr[str[i]-'A'] = true;
        }
    }
    cout<<cnt<<endl;
}
int main(){
    int t;cin>>t;
    while(t--) solve();

return 0;
}