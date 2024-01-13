#include <iostream>

using namespace std;
int H, W, N, M;

int main() {
    cin >> H >> W >> N >> M;
    int x = 1, y = 1;
    int x_count = 1, y_count = 1;
    x += N + 1;
    while(x <= H) {
        x_count++;
        x =  x + (N+1);
    }

    y += M + 1;
    while( y <= W) {
        y_count++;
        y += M + 1;
    }

    cout << x_count * y_count;




    return 0;
}