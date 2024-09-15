#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    string s;
    cin >> s;
    ll mx=0,cnt=0,N=s.length(),last=0,st=0; 
    for(ll i=0;i<N;i++){
        if(s[i]=='1'){
            cnt++;
        }else{
            if(last==0) {
                st=cnt;
                last=1;
            }     
            mx = max(mx,cnt);
            cnt=0;
        }
    }
    mx = max(mx,st+cnt);
    if(last==0){
        cout << N*N << endl;
    }else{
        ll r = (mx-1)/2;
        ll ans = (mx-r)*(r+1);
        cout << ans << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int Q=1;
    cin >> Q;
    while(Q--){
        solve();
    }
}
