#include<bits/stdc++.h>
using namespace std;

string s;
bool palindromic(int x , int y){
    while(x<y){
        if(s[x]!=s[y]){
            return false;
        }
        x++;
        y--;
    }
    return true;
}
int main(){
    cin >> s;
    int i=0,j=s.length()-1,N=s.length()/2,len=s.length();
    if(len==1){
        cout << s[0] << s[0] << endl;
        return 0;
    }
    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }else{
            bool left = palindromic(i+1,j);
            if(left){
                cout << s.substr(0,j+1) << s[i] << s.substr(j+1) << endl;
                return 0;
            }else{
                bool right = palindromic(i,j-1);
                if(right){
                    cout << s.substr(0,i) << s[j] << s.substr(j) << endl;
                    return 0;
                }else{
                    cout << "NA" << endl;
                    return 0;
                }
            }
        }
        if(len&1){
            cout << s.substr(0,N+1) << s[N] << s.substr(N+1) << endl;
        }else{
            cout << s.substr(0,N) << 'q' << s.substr(N) << endl;
        }
    }
}