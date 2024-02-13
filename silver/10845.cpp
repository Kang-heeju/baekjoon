#include <iostream>
#include <queue>
#include <string>

#define endl "\n"

using namespace std;
queue<int> q;

void push(int x) {
    q.push(x);
}

void pop() {
    if(!q.empty()) {
        int k = q.front();
        q.pop();
        cout << k << endl;
    }
    else cout << -1 << endl;
}

void size() {
    cout << q.size() << endl;
}

void empty() {
    if (q.empty()) cout << 1 << endl;
    else cout << 0 << endl;
}

void front() {
    if (!q.empty()) {
        int k = q.front();
        cout << k << endl;
    }
    else cout << -1 << endl;
}

void back() {
    if (!q.empty()) {
        int k = q.back();
        cout << k << endl;
    }
    else cout << -1 << endl;
}

int main() {

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        string temp;
        cin >> temp;
        if (temp == "push") {
            int a;
            cin >> a;
            push(a);
        }
        else if (temp == "pop") {
            pop();
        }
        else if (temp == "size")
            size();
        else if (temp == "empty")
            empty();

        else if (temp == "front")
            front();
        else if (temp == "back")
            back();
    }
    return 0;
}