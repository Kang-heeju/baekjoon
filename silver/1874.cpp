#include <iostream>
#include <stack>
#include <vector>
#define endl "\n";
using namespace std;

int cursor = 0;
stack<int> s;
vector<char> v;

int main() {
    int n;
    cin >> n;

    for (int i= 0; i < n ; i++) {
        int temp;
        cin >> temp;
        int x = temp - cursor;
        if (x > 0) {
            for (int j = 0; j < x;j++) {
                s.push(cursor+1);
                cursor++;
                v.push_back('+');
            }
            s.pop();
            v.push_back('-');
        }
        else if(x < 0 ) {
            if (s.top() == temp) {
                v.push_back('-');
                s.pop();
            }
            else {
                cout << "NO";
                return 0;
            }
        }
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}