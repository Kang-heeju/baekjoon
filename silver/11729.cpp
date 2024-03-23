#include <iostream>
#include <stack>

using namespace std;

stack<int> v1;
stack<int> v2;
stack<int> v3;

int N, cnt = 0;
vector<pair<int,int>> p;


void hanoi(){
    while(v3.size() != N) {
        if (!v1.empty()) {
            int temp = v1.top();
            if (temp < v3.top() || v3.empty()) {
                v3.push(temp);
                v1.pop();
                cnt++;
                p.push_back(make_pair(1, 3));

            } else if (temp < v2.top() || v2.empty()) {
                v2.push(temp);
                v1.pop();
                cnt++;
                p.push_back(make_pair(1, 2));
            }
        }
        else if (!v2.empty()) {
            int temp = v2.top();
            if (temp < v1.top() || v1.empty()) {
                v1.push(temp);
                v2.pop();
                cnt++;
                p.push_back(make_pair(2, 1));

            } else if (temp < v3.top() || v3.empty()) {
                v3.push(temp);
                v2.pop();
                cnt++;
                p.push_back(make_pair(2, 3));
            }
        }
        else if (!v3.empty()) {
            int temp = v3.top();
            if (temp < v2.top() || v2.empty()) {
                v2.push(temp);
                v3.pop();
                cnt++;
                p.push_back(make_pair(3, 2));

            } else if (temp < v1.top() || v1.empty()) {
                v1.push(temp);
                v3.pop();
                cnt++;
                p.push_back(make_pair(3, 1));
            }
        }
    }
}


int main() {

    v3.push(99);
    cin >> N;
    for(int i = N; i >= 1; i--) {
        v1.push(i);
    }
    hanoi();

    cout << cnt << "\n";

    for (int i = 0; i< cnt; i++) {
        cout << p[i].first << " " << p[i].second << "\n";
    }

    return 0;
}