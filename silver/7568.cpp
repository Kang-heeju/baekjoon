#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    int rank[99];
    fill_n(rank, 99, 1);
    int info[99][2];

    for (int i = 0; i < x; i++) {
        cin >> info[i][0] >> info[i][1];
        for (int j= 0; j < i; j++) {
            if(info[i][0] > info[j][0] && info[i][1] > info[j][1])
                rank[j]++;
            else if(info[i][0] < info[j][0] && info[i][1] < info[j][1])
                rank[i]++;
        }
    }

    for(int i = 0; i < x; i++) {
        cout << rank[i] << " ";
    }
    
    return 0;
}