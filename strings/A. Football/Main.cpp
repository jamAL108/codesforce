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


string s;
int countPoss=1;

int main(){
    int x1, y1;
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> s;
    for(int i=1;i<s.length();i++){
        if(s[i]!=s[i-1]){
            countPoss=1;
        }else{
            countPoss++;
            if(countPoss>=7){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}