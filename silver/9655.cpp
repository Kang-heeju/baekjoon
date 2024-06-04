#include <iostream>

using namespace std;

string win[1001];

int main() {
    int N;
    cin >> N;
    int k = N % 3 ;
    if(k == 0) k = 3;

    win[1] = "SK";
    win[2] = "CY";
    win[3] = "SK";

    for(int i = 0; i < (N / 3);i++) {
        if (win[k] == "SK") win[k+ 3] = "CY";
        else win [k+3] = "SK";
        k+= 3;
    }
    cout << win[N];
    return 0;
}