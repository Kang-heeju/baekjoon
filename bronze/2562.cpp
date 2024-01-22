#include <iostream>

using namespace std;

int max1, max_num=0;

int main() {
    for (int i =1; i <= 9; i++) {
        int temp;
        cin>> temp;
        if (temp > max_num) {
            max_num = temp;
            max1 = i;
        }
    }

    cout << max_num << endl << max1;

    return 0;
}