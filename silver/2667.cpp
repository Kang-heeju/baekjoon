#include <iostream>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

int arr[30][30];
bool check[30][30];
int dx[4] = {0,0,1, -1};
int dy[4] = {1, -1, 0, 0};
int numApt[1000] = {0,};

void BFS(int x, int y, int count, int apt) {
    queue<pair<int, int>> q;
    pair<int, int> p;
    p = make_pair(x, y);
    q.push(p);
    check[x][y] = true;

    while(!q.empty()) {
        numApt[apt]++;
        p = q.front();
        q.pop();
        int x1 = p.first;
        int y1 = p.second;

        for(int i = 0; i < 4; i++) {
            int dx1 = x1 + dx[i];
            int dy1 = y1 + dy[i];
            if(dx1 > 0 && dy1 > 0 && dx1 <= count && dy1 <= count) { //범위 내에 있을 시
                if(arr[dx1][dy1] == 1 && !check[dx1][dy1]) { //아파트가 존재하고 방문하지 않았으면
                    p = make_pair(dx1, dy1);
                    q.push(p);
                    check[dx1][dy1] = true;
                }
            }
        }
    }
}

int main() {
    int apt = 0;
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++) {
        string temp;
        cin >> temp;
      for (int j = 1; j <= num; j++) {
          arr[i][j] = temp[j - 1] - '0';
      }
    }

    for (int i = 1; i <=num; i++) {
        for(int j = 1; j <= num; j++) {
            if(arr[i][j] == 1) {
                if (!check[i][j]) { //아직 방문하지 않은 단지라면 BFS 돈다.
                    BFS(i, j, num, apt);
                    apt++;
                }
            }
        }
    }

    cout << apt << endl;
    sort(numApt, numApt + apt);
    for(int i = 0; i < apt - 1; i++) {
        cout << numApt[i] << endl;
    }
    cout << numApt[apt -1];


    return 0;
}