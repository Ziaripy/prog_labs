#include <stdio.h>

long long countNumbers(int n) {
    if (n == 1) return 2; // Для однорозрядних чисел є 2 можливі цифри (5 або 9)

    long long dp[n + 1][2];
    dp[1][0] = 1; // Один розряд - це 5
    dp[1][1] = 1; // Один розряд - це 9

    for (int i = 2; i <= n; i++) {
        dp[i][0] = dp[i - 1][1]; // Останній розряд 5
        dp[i][1] = dp[i - 1][0] + dp[i - 1][1]; // Останній розряд 9 або 5
    }

    return dp[n][0] + dp[n][1];
}

int main() {
    int n;
    printf("Введіть кількість розрядів n: ");
    scanf("%d", &n);

    long long result = countNumbers(n);
    printf("Кількість чисел із %d розрядів: %lld\n", n, result-1);

    return 0;
}
