#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int arr[1000] = {0, };
    int max = -1;
    char m;
    bool same = false;
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        int num = toupper(s[i]);
        arr[num]++;
        if(arr[num] > max) {
            m = toupper(s[i]);
            max = arr[num];
            same = false;
        }
        else if (arr[num] == max) {
            same = true;
        }
    }

    if(same) {
        cout << "?";
        return 0;
    }

    cout << m;
    return 0;
}