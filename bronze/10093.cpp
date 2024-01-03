#include <iostream>
#define l long long
using namespace std;

long long a, b;

int main() {
    cin >> a >> b;
    if (a > b) {
        long long num = a - b -1;
        cout << num << endl;
        for (l i = b+1; i < a; i++) {
            cout << i << ' ';
        }
    }
    else if (a < b) {
        int num = b - a -1;
        cout << num << endl;
        for (l i = a +1; i < b; i++) {
            cout << i << ' ';
        }
    }
    else if (a == b) {
        l num = a - b;
        cout << num << endl;
    }
    return 0;
}