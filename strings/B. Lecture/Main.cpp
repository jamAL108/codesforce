#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    unordered_map<string, string> word_map;
    for (int i = 0; i < m; i++) {
        string a, b;
        cin >> a >> b;
        if (b.length() < a.length()) {
            word_map[a] = b; // If the word in the second language is shorter, map 'a' to 'b'
        } else {
            word_map[a] = a; // Otherwise, keep 'a' as it is
        }
    }
    
    for (int i = 0; i < n; i++) {
        string c;
        cin >> c;
        cout << word_map[c] << " ";
    }
    cout << endl;
    
    return 0;
}
