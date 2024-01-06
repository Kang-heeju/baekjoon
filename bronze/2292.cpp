#include <iostream>

using namespace std;

int main() {
    bool t = true;
    int n = 2, sum = 1;
    long long int N;
    cin >> N;
    if (N == 1) {
        cout << 1 << endl;
        return 0;
    }

    while (t) {
        if (sum + 1 <= N && N <= sum + 6 * (n - 1)) {
            cout << n;
            t = false;
        }
        sum += 6* (n - 1);
        n++;
    }

    return 0;
}