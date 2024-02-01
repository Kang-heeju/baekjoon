#include <iostream>
using namespace std;


int line() {
    int arr[21];
    int count = 0;
    int n;
    cin >> n;
    for(int i = 1; i <= 20; i++) {
        int temp;
        cin >>temp;
        if(i == 1) {
            arr[1] = temp;
        }
        else {
            for(int j = 1; j < i; j++) {
                if(arr[j] < temp) continue;
                else {
                    for(int k = i; k > j; k--) {
                        arr[k] = arr[k - 1];
                        count++;
                    }
                    arr[j] = temp;
                    break;
                }
            }
            if(arr[i-1] < temp) arr[i] = temp;
        }
    }
    return count;

}

int main() {
    int N;
    cin >> N;
    int ans[N];

    for (int i = 0; i< N; i++) {
        ans[i] = line();
    }

    for (int j = 0; j < N; j++) {
        cout << j + 1 << " " << ans[j] << "\n";
    }


    return 0;
}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int students[20];
//int main()
//{
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//
//    int P, num, result = 0;
//    cin >> P;
//
//    for (int tc = 0; tc < P; tc++) {
//        cin >> num;
//        result = 0;
//        for (int i = 0; i < 20; i++) cin >> students[i];
//        for (int i = 0; i < 20; i++) {
//            for (int j = i; j < 20; j++) {
//                if (students[i] > students[j]) result += 1;
//            }
//        }
//        cout << num << ' ' << result << "\n";
//    }
//
//    return 0;
}