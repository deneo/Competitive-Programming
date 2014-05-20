#include <iostream>
using namespace std;

int n, m[110][110];

void get_varf() {
    for (int i = 1; i <= n; ++i) {
        int grad1 = 0, grad2 = 0;
        for (int j = 1; j <= n; ++j) {
            if (m[i][j]) ++grad1;
            if (m[j][i]) ++grad2;
        }
        if (grad2 < grad1) return i;
    }
}

int main() {
        cin >> n;
        for (int i = 1; i <= n; ++i)
                for (int j = 1; j <= n; ++j)
                        cin >> m[i][j];
        cout << get_varf();
        return 0;
}
