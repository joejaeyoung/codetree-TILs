#include <iostream>
#include <vector>

#define MAX_NUM 1000

using namespace std;

int n, m;
int vertex_cnt;

vector<int> graph[MAX_NUM + 1];
bool visited[MAX_NUM + 1];

void DFS(int vertex) {
    for (int i = 1; i < (int)graph[vertex].size(); i++) {
        int cur_v = graph[vertex][i];
        if (!visited[cur_v]) {
            visited[cur_v] = true;
            vertex_cnt++;
            DFS(cur_v);
        }
    }
}
int main() {
    cin >> n >> m;

    int v1, v2;
    for(int i = 0; i < m; i++) {
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    visited[1] = true;
    DFS(1);

    cout << vertex_cnt;
    return 0;
}