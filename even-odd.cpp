#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int x;
    int y;
    string words[9] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    cin >> x;
    cin >> y;
    if(x >= 1 && x <= 9) {
        for (int i = 0; i < x; i++) {
            if(x <= 9 && x <= y) {
                cout << words[x-1] << "\n";
                x+=1;
            }
        }
    }
    if (y > 9) {
        for (int j = 10; j <= y; j++) {
            if (j % 2 == 0) {
                cout << "even\n";
            }else if (j % 2 != 0) {
                cout << "odd\n";
            }
        }
    }

    return 0;
}
