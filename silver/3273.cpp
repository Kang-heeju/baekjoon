#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> v;
int n, x;

void check() {
    int cnt = 0;
    int l = 0, r = n-1;
    while( l < r) {
        int temp = v[l] + v[r];
        if (temp == x) {
            cnt++;
            l++;
            r--;
        }
        else if( temp < x) l++;
        else if (temp > x) r--;
    }
    cout << cnt;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        int k;
        cin >>k;
        v.push_back(k);
    }
    sort(v.begin(), v.end());
    cin >> x;

    check();
    return 0;
}