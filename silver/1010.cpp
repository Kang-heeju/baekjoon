#include <iostream>
using namespace std;

int main() {
    int t;
    int n, m;
    cin >> t;
    long long answer = 1;
    for(int i=0; i<t; i++){
        answer = 1;
        cin >> n >> m;
        if(n > (m/2)) n = (m - n);
        for(int j=0; j<n; j++){
            answer *= (m - j);
            answer /= (j+1);
        }
        cout << answer << endl;;
    }
    return 0;
}