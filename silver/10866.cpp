#include <iostream>
#include <deque>
#include <string>
#define endl "\n"

using namespace std;
deque<int> dq;

void push_front() {
    int x;
    cin >> x;
    dq.push_front(x);
}

void push_back() {
    int x;
    cin >>x;
    dq.push_back(x);
}

void pop_front() {
    if(!dq.empty()) {
        int x = dq.front();
        dq.pop_front();
        cout << x << endl;
    }
    else cout << -1 << endl;
}

void pop_back() {
    if(!dq.empty()) {
        int x = dq.back();
        dq.pop_back();
        cout << x << endl;
    }
    else cout << -1 << endl;
}

void size() {
    cout << dq.size() << endl;
}

void empty() {
    if(dq.empty()) cout << 1 << endl;
    else cout << 0 << endl;
}

void front() {
    if(!dq.empty()) cout << dq.front() << endl;
    else cout << -1 << endl;
}

void back() {
    if(!dq.empty()) cout << dq.back() << endl;
    else cout << -1 << endl;
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string temp;
        cin >> temp;
        if (temp == "push_back") push_back();
        else if(temp == "push_front") push_front();
        else if(temp == "pop_front") pop_front();
        else if(temp == "pop_back") pop_back();
        else if(temp == "size") size();
        else if(temp == "empty") empty();
        else if(temp == "front") front();
        else if(temp == "back") back();
    }

    return 0;
}