#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll N;
unordered_map<int,int> mp;
unordered_set<int, greater<int>> st;
void solve() {
    cin >> N;
    int arr[N];
    for(int i=0,a;i<N;i++){
        cin >> a;
        mp[a]++;
        st.insert(a);
    }
    if(mp.size()==1){
        cout << -1 << endl;
        return;
    }
    vector<int> b;
    vector<int> c;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int Q;
    cin >> Q; // Read number of test cases
    while (Q--) {
        solve(); // Process each test case
    }
}
