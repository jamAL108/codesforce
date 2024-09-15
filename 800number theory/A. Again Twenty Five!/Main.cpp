#include<bits/stdc++.h>
using namespace std;
 
int N;
void solveP() {
    cin >> N;
    if(N==1){
        cout << "05" << endl;
    }else{
        cout << "25" << endl;
    }
}
 
int main() {
 
    int testCases = 1;
    // cin >> testCases;
    while(testCases--) {
        solveP();
    }
}