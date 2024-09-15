#include <bits/stdc++.h>
using namespace std;

string s;
const int maxN = 1e5 + 1;
int cnt,ans,N;
bool prefix[maxN],suffix[maxN];
unordered_map<char, int> mp;

void solveP() {
    cin >> s;
    N=s.length();
    prefix[0] = true;
    suffix[N-1]=true;
    cnt = 0;  // Initialize the counter
    mp.clear();  // Clear the map for each new test case
    
    for (int i = 0; i < N; i++) {
        if (mp[s[i]] & 1) {
            cnt--;
        } else {
            cnt++;
        }
        mp[s[i]]++;
        if (cnt <= 1) {
            prefix[i] = true;
        } else {
            prefix[i] = false;
        }
    }
    mp.clear();
    cnt=0;
    for (int i = N-1; i>=0; i--) {
        if (mp[s[i]] & 1) {
            cnt--;
        } else {
            cnt++;
        }
        mp[s[i]]++;
        if (cnt <= 1) {
            suffix[i] = true;
        } else {
            suffix[i] = false;
        }
        if(i>0 && prefix[i-1]==true && suffix[i]==true){
            ans++;
        } 
    }
    printf("%d",ans);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int m=1;
    // cin >> m;  // Initialize `m` with a value
    while (m--) {
        solveP();
    }
}
