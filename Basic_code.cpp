/*
    written by Anmol_Aman.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef unsigned long long ull;
typedef long long int lli;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef priority_queue<int>  max_heap;
typedef priority_queue<int, vector<int>, greater<int>> min_heap;

#define start cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);  
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
#define pb push_back
#define pf push_front
// loops
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
// some extra
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} cout<<endl;
#define precision(x) cout<<fixed<<setprecision(x);
#define sz(V) ll(V.size())
// function
ll power(ll x,ll y,ll mod)
{
    ll res=1;
    // x=x%mod;
    while(y>0){
        if(y%2==1){
            res*=x;
            // res=res%mod;
        }
        y/=2; x*=x; // x=x%mod;
    }
    return res;
}
ll str_to_num(string s){
    return stoi(s);
}
string num_to_str(ll num){
    return to_string(num);
}
/* ascii value 
    A=65,Z=90,a=97,z=122
*/

/*  --------------------MAIN PROGRAM----------------------------*/
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;




// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
//kadane's, karghimgam
//dp 


//identifiaction
//sorted - binary_search, 2ptr
//k-optimal(min/max) -> max and min heap
//k-size ->  

 
 
 

 
 
ll solve(){
    
return 0;
}
int main(){
    start;
    /*
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif 
    */


    ll tt=1;
    cin>>tt;
    while(tt--){
        solve();
    }
}
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission 
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/