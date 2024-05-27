#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int, pair<int, int>> p;

bool visited[100001];
int parent[100001];
vector<p> graph;
int V, E;

int find_root(int s) {
    if(parent[s] == s) return s;
    return parent[s] = find_root(parent[s]);
}

void union_root(int x, int y) {
    x = find_root(x);
    y = find_root(y);
    if(x != y) parent[y] = x;
}

int kruskal() {
    int w = 0;

    for (int i = 0; i < graph.size(); i++) {
        int start = graph[i].second.first;
        int end = graph[i].second.second;

        if(find_root(start) != find_root(end)){
            union_root(start, end);
            w += graph[i].first;
        }
    }
    return w;
}

int main() {
    cin >> V >> E;
    int s, e, weight;
    for(int i = 0; i < E; i++) {
        cin >> s >> e >> weight;
        graph.push_back(make_pair(weight, make_pair(s, e)));
    }
    for(int j = 0; j <= V; j++) parent[j] = j;

    sort(graph.begin(), graph.end());
    int w = kruskal();
    cout << w;

    return 0;
}