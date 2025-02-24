#include <bits/stdc++.h>

using namespace std;

class dsu {
    int n;
    int n_components;
    vector<int> parent, rank;

public:
    dsu(int n) {
        assert(n > 0);
        this->n = n;
        n_components = n;
        parent.resize(n);
        rank.resize(n);

        iota(parent.begin(), parent.end(), 0);
        fill(rank.begin(), rank.end(), 1);
    }

    int number_of_components() {
        return n_components;
    }

    int find_set(int v) {
        assert(v >= 0 and v < n);
        if (parent[v] == v)
            return v;
        return parent[v] = find_set(parent[v]);
    }

    void union_sets(int u, int v) {
        assert(u >= 0 and u < n);
        assert(v >= 0 and v < n);
        u = find_set(u);
        v = find_set(v);

        if (u != v) {
            n_components--;
            if (rank[v] < rank[u])
                swap(u, v);
            
            parent[u] = v;
            if (rank[u] == rank[v])
                rank[v]++;
        }
    }
};

int main() {
    dsu d(10);

    d.union_sets(1, 3);
    d.union_sets(5, 7);
    d.union_sets(4, 6);
    d.union_sets(6, 8);
    d.union_sets(9, 1);
    d.union_sets(4, 9);

    cout << d.find_set(2) << '\n';
    cout << d.find_set(3) << '\n';
    cout << d.find_set(9) << '\n';
    cout << d.find_set(5) << '\n';

    cout << d.number_of_components() << '\n';
    return 0;
}