#include <iostream>

using namespace std;

int main() {
    int x;
    cin >>x;
    for(int i = 1; i <=x; i++) {
        for (int j = 0; j < x - i; j++) {
            cout << " ";
        }
        for (int k = 0; k < i; k++) {
            cout << "*";
        }
        if (i != x) cout << endl;
    }
}