#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, d, l;
        cin >> n >> d >> l;

        if (l > n || d + 1 > n || l < 2) {
            cout << -1 << endl;
            continue;
        }

        vector<pair<int, int>> edges;

        for (int i = 1; i <= d; i++) {
            edges.push_back({i, i + 1});
        }

        int current_node = d + 2; // Nodes left after the backbone
        int remaining_leaves = l - 2; // Leaves excluding the two endpoints of the diameter

        // Attach remaining leaves to form exactly l leaves
        for (int i = 1; remaining_leaves > 0 && current_node <= n; i++) {
            edges.push_back({i, current_node});
            current_node++;
            remaining_leaves--;
        }

        // Attach remaining nodes arbitrarily
        for (int i = 1; current_node <= n; i++) {
            edges.push_back({1, current_node});
            current_node++;
        }

        // Output the edges
        for (auto &edge : edges) {
            cout << edge.first << " " << edge.second << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
