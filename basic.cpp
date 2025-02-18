#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
using ld = long double;
 
// to_string implementations
string to_string(bool b);
 
string to_string(string s);
 
template <typename T, typename U>
string to_string(pair<T, U> p);
 
template <typename T, typename U, typename V>
string to_string(tuple<T, U, V> tp);
 
template <typename T>
string to_string(const T &c);
 
string to_string(bool b) {
    return b ? "true" : "false";
}
 
string to_string(string s) {
    return s;
}
 
template <typename T, typename U>
string to_string(pair<T, U> p) {
    return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}
 
template <typename T, typename U, typename V>
string to_string(tuple<T, U, V> tp) {
    return "(" + to_string(get<0>(tp)) + ", " + to_string(get<1>(tp)) + ", " +
           to_string(get<2>(tp)) + ")";
}
 
template <typename T>
string to_string(const T &c) {
    string out = "{";
    bool f = true;
    for (const auto &x : c) {
        if (f) {
            out += to_string(x);
            f = false;
            continue;
        }
        out += ", " + to_string(x);
    }
    out += "}";
    return out;
}
 
void init_io() {
    ios_base::sync_with_stdio(false);
}

int main() {
    init_io();

    // do nothing program
    return 0;
}