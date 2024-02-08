#include <iostream>
#include <stack>
#include <string>

using namespace std;

int N;
stack<int> stk;

void push(int x) {
    stk.push(x);
}

void pop() {
    if(!stk.empty()) {
        int n = stk.top();
        cout << n << endl;
        stk.pop();
        return;
    }
    else {
        cout << -1 << endl;
    }
}

void size() {
    int n = stk.size();
    cout << n << endl;
}

void empty() {
    if(stk.empty()) cout << 1 << endl;
    else cout << 0 << endl;
}

void top() {
    if (!stk.empty()) {
        int n = stk.top();
        cout << n << endl;
    }
    else {
        cout << -1 << endl;
    }
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        string x;
        int a;

        cin >> x;

        if(x == "push") {
            cin >> a;
            push(a);
        }
        else if(x == "pop") pop();
        else if(x == "size") size();
        else if(x == "empty") empty();
        else if(x == "top") top();

    }
}