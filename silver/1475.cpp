#include <iostream>
#include <string>

using namespace std;

string n;
int c[11] = {0, };

int k;

int main() {

    cin >> n;
    for (int i = 0; i < size(n); i++) {
        int x = n[i] - '0';
        if (n[i] == '6' || n[i] == '9') c[10]++;
        else c[x]++;
    }
    int max = 0;

    if( c[10] % 2 == 0) k = c[10] / 2;
    else k = (c[10] + 1 ) / 2;

    for (int i = 0; i < 10; i++) {
        if (c[i] > max) max = c[i];
    }
    if (max > k) cout << max;
    else cout << k;
    return 0;

}