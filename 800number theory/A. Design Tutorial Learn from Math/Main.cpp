#include<bits/stdc++.h>
using namespace std;
 
const int maxN = 1e6+1;
int N;
bool is_prime[maxN];

void solveP() {
    cin >> N;
    fill(is_prime+2,is_prime+N+1,true);
    for(int i=2;i*i<=N;i++){
        if(is_prime[i]){
            for(int j=i*i;j<=N;j+=i){
                is_prime[j]=false;
            }
        }
    }
    for(int i=4;i<=N;i++){
        if(!is_prime[i] && !is_prime[N-i]){
            printf("%d %d",i,N-i);
            return;
        }
    }
}
 
int main() {
    int testCases = 1;
    // cin >> testCases;
    while(testCases--) {
        solveP();
    }
}