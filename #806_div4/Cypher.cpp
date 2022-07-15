#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        int x;cin>>x;
        int cnt = arr[i];
        while(x--){
            char ch;
            cin>>ch;

            if(ch == 'U'){
                cnt-=1;
            }else if(ch == 'D'){
                cnt+=1;
            }
        }

        if(cnt>9) cnt = cnt%10;
        else if(cnt<0) cnt = 10 + cnt;
        arr[i] = cnt;


    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int t;cin>>t;
    while(t--) solve();
return 0;
}