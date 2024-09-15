#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll N, M;
    cin >> N >> M; // Read string length and max operations
    string s;
    cin >> s;

    ll small[26] = {0}; // Count for lowercase letters
    ll bigg[26] = {0};  // Count for uppercase letters
    ll cnt = 0;

    // Count occurrences of each character
    for (char c : s) {
        if (islower(c)) {
            small[c - 'a']++;
        } else if (isupper(c)) {
            bigg[c - 'A']++;
        }
    }

    // Calculate initial pairs and excess counts
    for (int i = 0; i < 26; i++) {
        ll pairs = min(small[i], bigg[i]); // Count pairs
        cnt += pairs; // Total pairs counted
        small[i] -= pairs; // Reduce counts after pairing
        bigg[i] -= pairs; // Reduce counts after pairing
    }

    // Handle remaining counts with available operations
    for (int i = 0; i < 26; i++) {
        if (M!=0 && small[i] > 0) {
            ll excess = small[i]/2; // Remaining lowercase
            ll canConvert = min(excess, M); // Max conversions possible
            cnt += canConvert; // Add conversions to count
            M -= canConvert; // Reduce available operations
        }else if (M!=0 && bigg[i] > 0) {
            ll excess = bigg[i]/2; // Remaining uppercase
            ll canConvert = min(excess, M); // Max conversions possible
            cnt += canConvert; // Add conversions to count
            M -= canConvert; // Reduce available operations
        }
    }

    cout << cnt << endl; // Output result
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
