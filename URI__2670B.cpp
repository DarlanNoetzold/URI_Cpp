
#include <bits/stdc++.h>

int main() {
    int a[3], soma = -1, tmp;

    for (int i = 0; i < 3; i++)
        cin >> a[i];

    for (int i = 0; i < 3; i++) {
        int b = (i + 1)%3, c = (i + 2)%3;
        tmp = 2*abs(b-i)*a[b] + 2*abs(c-i)*a[c];
        if (soma == -1 || tmp < soma) soma = tmp;
    }

    cout << soma << "\n";

    return 0;
}
