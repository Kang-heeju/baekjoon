#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;

int N;
int arr[500000];

int sum = 0;

int mean(int sum) {
    double avg = (double)sum / N;
    int x = round(avg);
    return x;
}

int median() {
    sort(arr, arr+ N);
    return arr[(N - 1) / 2];
}

int mode(int count[]) {
    int mostval= 0 ;
    int most = 0;
    int second_mostval = -10000;
    int same = 0;

    for (int i = 8000; i >= 0; i--) {
        if (count[i] == 0) continue;

        else if (count[i] == most) {
            second_mostval= mostval;
            mostval = i - 4000;
            same = 1;
        }

        else if(count[i] > most) {
            most = count[i];
            mostval = i - 4000;
            same = 0;
        }

    }
    if (second_mostval == -10000 || same == 0) return mostval;
    else return second_mostval;

}

int range() {
    int range = arr[N - 1] - arr[0];
    return range;
}

int main() {
    cin >> N;

    int temp;
    int count[8100] = { 0, };

    for (int i = 0; i < N; i++) {
        cin >> temp;
        arr[i] = temp;
        sum = sum + temp;
        count[temp + 4000]++;
    }

    cout << mean(sum) << endl;
    cout << median() << endl;
    cout << mode(count) << endl;
    cout << range() << endl;

    return 0;

}