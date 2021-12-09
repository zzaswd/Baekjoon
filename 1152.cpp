#include <iostream>
#include <string>
using namespace std;

int main_1152() {
    int count;
    string s;
    getline(cin, s);
    if (s.empty()) { count = 0; }
    else {
        count = 1;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') count += 1;
        }

        if (s[0] == ' ') count -= 1;
        if (s[s.size() - 1] == ' ') count -= 1;
    }
    cout << count;

    return 0;
}