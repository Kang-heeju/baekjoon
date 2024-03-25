#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;

int N, M, V;
vector<int> graph[1002];
bool visited[1002];

void reset(int k) {
    for (int i = 1; i <=k;i++) {
        visited[i] = 0;
    }
}

void DFS(int x) {
    visited[x] = true;
    cout << x << ' ';

    for (int i = 0; i < graph[x].size(); i++) {
        int y = graph[x][i];
        if (!visited[y])
            DFS(y);
    }
}

void BFS(int x) {
    queue<int> q;
    q.push(x);
    visited[x] = true;

    while(!q.empty()) {
        int k = q.front();
        q.pop();
        cout << k << ' ';
        for (int i = 0; i < graph[k].size(); i++) {
            int y = graph[k][i];
            if (!visited[y]) {
                q.push(y);
                visited[y] = true;
            }
        }
    }

}

int main() {
    cin >> N >> M >> V;

    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for (int i = 1; i <= N; i++) {
        sort(graph[i].begin(), graph[i].end()); // 낮은 수부터 방문해야 하므로 정렬
    }
    DFS(V);
    cout << '\n';
    memset(visited, false, sizeof(visited));
    //reset(N);
    BFS(V);

    return 0;
}