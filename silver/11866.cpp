#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N, K;
queue<int> q;
vector<int> v;

int main() {
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    while (q.size() != 0) {
        for(int j = 0; j < K-1; j++) {
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
        int temp1 = q.front();
        q.pop();
        v.push_back(temp1);
    }

    cout << '<';
    for(int i = 0; i < N-1; i++) {
        cout << v[i] << ", ";
    }
    cout << v[N-1] << '>';

    return 0;
}