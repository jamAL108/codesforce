#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pb push_back

const int maxN = 1e4 + 1;
int N, t[maxN], firstCycle[maxN], in[maxN];
bool vis[maxN];

void dfs(int node,int p) {
    vis[node] = true;
    int child = t[node];
    if (vis[child]) {
        firstCycle[p] = child; 
    } else {
        dfs(child,p);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> t[i];
    }

    for (int i = 1; i <= N; i++) {
        fill(vis+1,vis+N+1,false);
        dfs(i,i);
    }

    for (int i = 1; i <= N; i++) {
        printf("%d ", firstCycle[i]);
    }
    return 0;
}
