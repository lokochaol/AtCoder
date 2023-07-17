// https://atcoder.jp/contests/abc283/tasks/abc283_d
// stackを使う方法と、再帰で書く方法があるらしい。

// /*
#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for (int i = 0; i < n; i++)

// 再帰を使った実装
int main(void) {
    string S;
    cin >> S;
    size_t si = 0;
    set<char> cs;
    bool ok = true;

    auto f = [&](auto f) -> void {
        string ns;
        while (si < S.size()) {
            char c = S[si++];
            if (c == '(') f(f);
            else if (c == ')') {
                for (char c : ns) {
                    cs.erase(c);
                }
                return;
            }
            else {
                if (cs.count(c)) ok = false;
                cs.insert(c);
                ns += c;
            }
        }
    };
    f(f);

    if (ok) cout << "Yes" << '\n';
    else cout << "No" << '\n';
    return 0;
}
// */

// stackを使った実装
/*
#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)

int main(void) {
    string S;
    cin >> S;
    stack<string> stk;
    set<char> st;
    stk.push("");
    for (char c : S) {
        if (c == '(') {
            stk.push("");
        }
        else if (c == ')') {
            for (char x : stk.top()) {
                st.erase(x);
            }
            stk.pop();
        }
        else {
            if (st.count(c)) {
                cout << "No" << '\n';
                return 0;
            }
            stk.top() += c;
            st.insert(c);
        }
    }
    cout << "Yes" << '\n';
    return 0;
}
*/