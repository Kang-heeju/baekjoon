#include <iostream>
#include <queue>

using namespace std;
int N;

struct cmp{
    bool operator() (int a, int b) {
        if (abs(a) > abs(b))
            return true;
        else if(abs(a) == abs(b)) {
            if (a > b)
                return true;
            else
                return false;
        }
        else return false;
    }
};


int main() {
    cin >> N;
    priority_queue<int, vector<int>, cmp> pq;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;

        if (x == 0) {
            if(pq.empty()) cout << 0 << endl;
            else {
                cout << pq.top()<< endl;
                pq.pop();
            }
        }

        else {
            pq.push(x);
        }
    }
    return 0;

}