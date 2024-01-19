#include <iostream>
#include <algorithm>

using namespace std;

int N;

int rope[100000];

int findMaximum(int arr[]) {
    int max = 0;
    for(int i = 0; i < N; i++ ) {
        int temp = arr[i] * (N - i);
        if (temp > max) max = temp;
    }

    return max;

}


int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> rope[i];
    }
    sort(rope, rope + N);

    int ans = findMaximum(rope);

    cout << ans;

    return 0;
}