#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string conv(int x) {
    string res;
    res=x+'0';
    return res;
}
string findmin(int m, int s) {
    if (m == 1) {
        if (s > 9) return "-1";
        return conv(s);
    }
    if (s == 0) return "-1";
    int val = 9 * m;
    if (val < s) return "-1";
    string res;
    while (s > 1 && m > 1) {
        int x = min(s - 1, 9);
        s = s - x;
        --m;
        res = conv(x) + res;
    }
    while (m > 1) {
        res = "0" + res;
        --m;
    }
    res = conv(s) + res;
    return res;
}

string findmax(int m, int s) {
    if (m == 1) {
        if (s > 9) return "-1";
        return conv(s);
    }
    if (s == 0) return "-1";
    int val = 9 * m;
    if (val < s) return "-1";
    string res;
    while (s > 0 && m > 0) {
        int x = min(s, 9);
        s = s - x;
        --m;
        res = res + conv(x);
    }
    while (m > 0) {
        res = res + "0";
        --m;
    }
    return res;
}

int main() {
    int m, s;
    cin >> m >> s;
    cout << findmin(m, s) << ' ' << findmax(m, s);
    return 0;
}
