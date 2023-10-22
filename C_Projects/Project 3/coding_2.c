#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    for (int test = 1; test <= t; test++) {
        int n, x;
        scanf("%d%d",&n,&x);
        int k[n + 1];
        int position[n + 1];
        for (int i = 1; i <= n; i++) {
            int amount;
            scanf("%d", &amount);
            position[i] = i;
            if (amount % x == 0) {
                k[i] = amount / x;
            }   else {
                k[i] = amount / x + 1;
            }

        }
        for (int i = 1; i < n; i++)
            for (int j = 1; j < n; j++)
            {
                if (k[j] > k[j + 1]) {
                    int tempk = k[j];
                    int tempposition = position[j];
                    position[j] = position[j + 1];
                    position[j + 1] = tempposition;
                    k[j] = k[j + 1];
                    k[j + 1] = tempk;
                }
            }
        printf("Case #%d: ",test);
        for(int i = 1; i <= n; i++) {
            printf("%d ",position[i]);
        }
        printf("\n");
    }
    return 0;
}