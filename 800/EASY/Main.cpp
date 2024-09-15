#include <bits/stdc++.h>

using namespace std;
 
int N;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N;
    if(N>2 && N%2==0){
        printf("YES");
    }else {
        printf("NO");
    }
}