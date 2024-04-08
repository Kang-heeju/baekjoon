#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

long long int arr[101010];

void init(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
}

int binarySearch(long long int start, long long int target, long long int end) {
    long long int mid = (start + end) / 2;

    if (start > end) return 0;

    if (arr[mid] == target) return 1;

    else if(arr[mid] > target) {
        return binarySearch(start, target, mid - 1);
    }

    else if(arr[mid] < target) {
        return binarySearch(mid + 1, target, end);
    }


}

int main() {
    init();

    int N;
    int M;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    cin >> M;

    for(int j = 0; j < M;j++) {
        long long int x;
        cin >>x;

        cout << binarySearch(0, x, N-1)<< "\n";
        //else cout << binarySearch(0,x,arr[N-1]);
    }


    return 0;

}