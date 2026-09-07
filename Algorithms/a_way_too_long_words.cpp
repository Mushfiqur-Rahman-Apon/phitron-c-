#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        if (s.length() > 10) {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        } else {
            cout << s << endl;
        }
    }

    return 0;
}
A. Watermelon
71A	Way Too Long Words
4A	Watermelon
231A	Team
71A