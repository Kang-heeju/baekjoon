#include <iostream>

using namespace std;

int arr[21];

void reverse(int x, int y) {
    int p = y - x;
    if (p % 2 ==0) {
        p = p / 2;
        for (int i = 0; i < p; i++) {
            int temp = arr[y-i];
            arr[y-i] = arr[x+i];
            arr[x+i] = temp;
        }
    }
    else {
        p = (p + 1) / 2;
        for (int j = 0; j < p; j++) {
            int temp = arr[y-j];
            arr[y-j] = arr[x+j];
            arr[x+j] = temp;
        }
    }
}

int main() {
    for (int i = 1; i <=20; i++) {
        arr[i] = i;
    }

    for(int j = 0; j < 10; j++) {
        int x, y;
        cin >> x >> y;
        reverse(x, y);
    }

    for (int i = 1; i <=20; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}