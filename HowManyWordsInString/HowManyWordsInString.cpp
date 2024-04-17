#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <vector>

using namespace std;
int main() {
    string s;
    cout << "Input string: "; getline(cin, s);

    bool hasChar = false;
    int hasWord = 0;
    bool hWord = false;
    int count = 0;
    for (int i = 0; i < s.length(); i++) {

        if (s[i] >= '!' && s[i] <= '~') {
            if (!hWord) {
                hWord = true;
            }

        }
        else {
            if (hWord) {
                hWord = false;
                count++;
            }

        }


    }

    if (hWord) {
        count++;
        cout << count << "\n";
    }
    else if (!hWord) {
        cout << count << "\n";
    }

}