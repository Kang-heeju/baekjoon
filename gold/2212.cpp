#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    int temp;
    int lengthSum = 0;
    vector<int> sensor;
    cin >> N >> K;

    for(int i = 0; i < N; i++) {
        cin>> temp;
        sensor.push_back(temp);
    }
    sort(sensor.begin(), sensor.end());
    sensor.erase(unique(sensor.begin(), sensor.end()), sensor.end()); //중복 없는 배열로 센서 지점의 수 확인

    int loc = sensor.size();
    int count = 0; //현재 설치된 집중국의 수
    int cursor = 1;
    int min_length; //현재 설치하려는 집중국 내의 거리 게산
    int start = 0;
    if (loc <= K) { //집중국의 수가 센서보다 많을 때
        cout << 0;
        return 0;
    }

    while(cursor != loc) {
        if(loc - start == K - count) break; //남은 센서 지점의 수 = 남은 집중국의 수
        if(K - count == 1) { //집중국 한개남으면 끝까지처리
            lengthSum += sensor[loc - 1] - sensor[cursor - 1];
            break;
        }
        min_length = min(sensor[cursor] - sensor[cursor - 1], sensor[cursor + 1] - sensor[cursor]);
        if(sensor[cursor + 1] - sensor[cursor] == sensor[cursor] - sensor[cursor - 1]){
            cursor++;
        }
        else if(min_length == sensor[cursor] - sensor[cursor - 1]) {
            lengthSum += sensor[cursor] - sensor[start];
            start = ++cursor;
            cursor++;
            count++;
        }
        else if(min_length == sensor[cursor + 1] - sensor[cursor]) {
            if(cursor == 1) {
                count ++;
                start = cursor;
            }
            cursor++;
        }

    }

    cout << lengthSum;
    return 0;
}