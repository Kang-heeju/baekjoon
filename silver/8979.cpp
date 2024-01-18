#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int arr[N+1][3];
    int rank = 1;
    for (int i = 0; i < N; i++) {
        int name;
        cin >> name;
        for(int j = 0; j < 3; j++) {
            cin >> arr[name][j];
        }
    }

    for(int i = 1; i <= N; i++) {
        if (i == K) continue;
        if(arr[i][0] > arr[K][0]){
            rank++;
        }
        else if(arr[i][0] == arr[K][0]) {
            if(arr[i][1] > arr[K][1]) {
                rank++;
            }
            else if(arr[i][1] == arr[K][1]) {
                if(arr[i][2] > arr[K][2]) {
                    rank++;
                }
            }
        }
    }

    cout << rank;

    return 0;
}