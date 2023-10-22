#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
        long long n, k, s;
        long long restart, go_back, fastest;
        scanf("%lld%lld%lld", &n, &k, &s);
        restart = k + n;
        go_back = (k - s) * 2 + n;
        if (restart > go_back) {
            fastest = go_back;
        }   else {
            fastest = restart;
        }
        printf("Case #%d: %lld\n", i, fastest);
    }
}