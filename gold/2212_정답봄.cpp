#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, K;
    int temp, size;
    int ans = 0;
    vector<int> interval;
    vector<int> sensor;
    cin >> N >> K;

    for(int i = 0; i < N; i++) {
        cin>> temp;
        sensor.push_back(temp);
    }
    sort(sensor.begin(), sensor.end());
    sensor.erase(unique(sensor.begin(), sensor.end()), sensor.end()); //중복 없는 배열로 센서 지점의 수 확인

    if(sensor.size() < K) {
        cout << 0;
        return 0;
    }
    for(int i = 0; i < sensor.size() - 1; i++) {
        size = sensor[i + 1] - sensor[i];
        interval.push_back(size);
    }
    sort(interval.rbegin(), interval.rend());

    for(int i = 0; i < K - 1; i++) {
        interval[i] = 0;
    }

    for(int j = 0; j < interval.size(); j++) {
        ans += interval[j];
    }

    cout << ans;
    return 0;

}