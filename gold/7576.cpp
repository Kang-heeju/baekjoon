#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int X, Y;
int map[1001][1001];
bool visited[1001][1001] = {false, };
int x_axis[4] = {0, 0, 1, -1};
int y_axis[4] = {1, -1, 0, 0};
int cnt = 0;
int zero = 0;
queue<pair<int, int>> q;

void BFS() {
    while(!q.empty()) {
        int size = q.size();
        for (int k = 0; k < size; k++) {
            int x, y;
            x = q.front().first;
            y = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++) {
                int mx = x + x_axis[i];
                int my = y + y_axis[i];

                if( mx >= 0 && mx < X && my >=0 && my < Y) {
                    if (!visited[mx][my] && map[mx][my] == 0) {
                        visited[mx][my] = true;
                        q.push(make_pair(mx, my));
                        zero--;
                        //check = true;
                    }
                }
            }
        }
        cnt++;
    }




}

int main() {
    cin >> X >> Y;

    for (int i = 0; i < Y; i++) {
        for (int j = 0; j < X; j++) {
            int temp;
            cin >> temp;
            if (temp == 1) {
               q.push((make_pair(j,i))); // 1이 오면 시작점으로 check를 해 놓는다
               visited[j][i] = true;
            }
            else if( temp == 0) {
                zero++; // 익지 않은 토마토의 개수를 세어준다
            }
            map[j][i] = temp;
        }
    }

    if (zero == 0) {
        cout << 0;
        return 0; //애초에 안 익은 토마토가 없을 때
    }

    BFS();

    if (zero > 0) {
        cout << -1;
        return 0; // 만약 익지 않은 토마토가 남아 있을 때
    }

    cout << cnt -1;


    return 0;
}