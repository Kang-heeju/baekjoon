#include <iostream>
#include <string>

using namespace std;

int N;

string x;



void check(string k) {
    int right = 0;
    int left = 0;

    char last = k.back();
    if (last == '(') {
        cout << "NO\n";
        return;
    }
    int num = k.length();

    for (int i = 0; i < num; i++) {

        char temp = k.back();
        if (right == 0 && left == 0 && temp == '(') {
            cout << "NO\n";
            return;
        }
        if (temp == ')') {
            right++;
            left--;
            k.pop_back();
        }
        else if(temp == '(') {
            right--;
            left++;
            k.pop_back();
        }
    }
    if (right == 0 && left == 0) {
        cout << "YES\n";
        return;
    }
    else {
        cout <<"NO\n";
        return;
    }
}

int main() {
    cin >> N;
    string ans[N];

    for (int i = 0; i < N; i++) {
        cin >> x;
        ans[i] = x;
    }
    for (int i = 0; i < N; i++) {
        check(ans[i]);
    }

    return 0;

}
