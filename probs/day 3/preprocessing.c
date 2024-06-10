#include <stdio.h>
#define VAL 2 + 3
const int DATA = 2 + 3;
void solve() {
    int a = VAL * VAL;
	int b = DATA * DATA;
    printf("%d %d", a, b);
}
int main() {
        solve();
        return 0;
}