#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int arr[100001];
    int N;
    int min = -9999;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + N);

    //투포인터 사용해서 하나는 맨앞 하나는 맨뒤 인덱스 가리키게
    //두개의 합이 0이 되면 stop 하고 출력
    //두개의 합이 0이 안되면, 두 합이 최소인 것을 계속 찾아나간다 ->
    //만약 모두음수 -> 맨 뒤에서 두개 합
    //만약 모두양수 -> 만 앞에서 두개 합
    //하나씩
    return 0;
}