#include <stdio.h>

int countSequences(int n) {
    int dp[n + 1];
    dp[0] = 2; // Початкова кількість послідовностей довжиною 0 - '0' і '1'
    dp[1] = 3; // Початкова кількість послідовностей довжиною 1 - '00', '01', '10'
    
    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 12345; // Обчислення кількості послідовностей
    }

    return dp[n];
}

int main() {
    int n;
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);

    int result = countSequences(n);
    printf("Кількість шуканих послідовностей: %d\n", result);

    return 0;
}
