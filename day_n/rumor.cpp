#include <bits/stdc++.h>
using namespace std;

long long dfs(vector<int>& visited, vector<vector<int>>& pairs,
              queue<int>& q, long long min1, vector<long long>& cost) {

    while (!q.empty()) {
        int node = q.front();
        
        min1 = min(min1, cost[node]);
        q.pop();

        for (int i = 0; i < pairs[node].size(); i++) {
            if (!visited[pairs[node][i]]) {
                visited[pairs[node][i]]=true;
                q.push(pairs[node][i]);
            }
        }
    }

    return min1;
}

int main() {
    int freinds;
    cin >> freinds;

    int pair;
    cin >> pair;

    vector<long long> cost(freinds);

    for (int i = 0; i < freinds; i++) {
        cin >> cost[i];
    }

    vector<vector<int>> pairs(freinds);

    for (int i = 0; i < pair; i++) {
        int a, b;
        cin >> a >> b;

        pairs[a - 1].push_back(b - 1);
        pairs[b - 1].push_back(a - 1);
    }

    long long total_min = 0;
    queue<int> q;
    vector<int> visited(freinds, false);

    for (int i = 0; i < freinds; i++) {
        if (!visited[i]) {
            visited[i] = true;
            q.push(i);
            total_min += dfs(visited, pairs, q, cost[i], cost);
        }
    }

    cout << total_min << '\n';
}
