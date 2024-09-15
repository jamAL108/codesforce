#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define ar array
#define rowspan {-1,0,1,0}
#define colspan {0,1,0,-1}
#define ld long double
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pi pair<int, int>
#define pip pair<int,pi>
#define a first
#define b second
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define all(x) (x).begin(), (x).end()
#define umapii unordered_map<int,int>
#define usetii unordered_set<int,int>
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
#define lb lower_bound
#define ub upper_bound
#define fo(a,b) for(auto i=a;i<b;++i)
#define PAIR_FIRST_ASC [](pair<int, int> a, pair<int, int> b) { return a.first < b.first; }
#define PAIR_FIRST_DESC [](pair<int, int> a, pair<int, int> b) { return a.first > b.first; }
#define PAIR_SECOND_ASC [](pair<int, int> a, pair<int, int> b) { return a.second < b.second; }
#define PAIR_SECOND_DESC [](pair<int, int> a, pair<int, int> b) { return a.second > b.second; }
#define CHECK_BOTH_ASC_DESC [](pair<int, int> a, pair<int, int> b) { if (a.first == b.first) return a.second < b.second; return a.first < b.first; }
#define pn(num) printf("%d\n", num);
#define ps(str) printf("%s\n", str);
#define pa(arry, size) \
    for (int i = 0; i < size; ++i) \
        printf("%d ", arry[i]); \
    printf("\n");


const int maxN = 1001;
int N;
int q1, q2, c1, c2;
bool vis[maxN][maxN];
int rows[] = {-1,-1,0,1,1,1,0,-1}, cols[] = {0,1,1,1,0,-1,-1,-1};

void dfs(int x, int y){
    vis[x][y]=true;
    for(int k=0;k<8;k++){
        int r = rows[k]+x;
        int c = cols[k]+y;
        if(r>=1 && r<=N && c>=1 && c<=N && vis[r][c]==false && r!=q1 && c!=q2 && (abs(r - q1) != abs(c - q2))){
            dfs(r,c);
        }
    }
}

int main(){
    int x1, y1;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    cin >> q1 >> q2 >> x1 >> y1 >> c1 >> c2 ;
    dfs(x1,y1);
    if(!vis[c1][c2]){
        printf("NO");
    }else {
        printf("YES");
    }
    return 0;
}