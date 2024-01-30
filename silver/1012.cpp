#include <iostream>
#include <cstring>
using namespace std;

int T;
int g[51][51] = {0, };
int x_axis[4] = {0, 0, 1, -1};
int y_axis[4] = {-1, 1, 0,0};
bool visited[51][51] = {false, };
int M, N, K;

void DFS(int x, int y) {
    visited[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + x_axis[i];
        int ny = y + y_axis[i];
        if(nx >= 0 && nx < M && ny >= 0 && ny < N) {
            if (g[nx][ny] == 1 && !visited[nx][ny]) {
                visited[nx][ny] = true;
                DFS(nx, ny);
            }
        }
    }

}

int main() {
    cin >> T;
    for(int z = 0; z < T; z++) {
        int cnt = 0;

        cin >> M >> N >> K;
        for (int i = 0; i < K; i++){
            int a, b;
            cin >> a >> b;
            g[a][b] = 1;
        }

        for (int i = 0; i < M; i++) {
            for (int j= 0; j< N; j++) {
                if(g[i][j] == 1) {
                    if (!visited[i][j]) {
                        cnt++;
                        DFS(i, j);
                    }
                }
            }
        }
        cout << cnt << " \n";
        memset(g, 0, sizeof(g));
        memset(visited, false, sizeof(visited));
    }
    return 0;
}
