#include <iostream>

using namespace std;

int N, M = 0, Y = 0;

void yongsik(int x) {

    Y += 10 * ( x / 30 + 1);
}

void minsik(int x) {
    M += 15 * ( x / 60 + 1);
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        yongsik(temp);
        minsik(temp);
    }

    if(M > Y) {
        cout << "Y " << Y;

    }

    else if ( Y > M){
        cout << "M " << M;
    }
    else {
        cout << "Y M " << M;
    }



    return 0;
}