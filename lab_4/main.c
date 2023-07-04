#include <stdio.h>

int countDivisors(int n) {
    int count = 0;

    // Перебір всіх можливих дільників від 1 до n
    for (int i = 1; i <= n; i++) {
        if (n % i == n / i) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    if (n <= 1 || n >= 150) {
        printf("Помилка: натуральне число n не задовольняє умову 1 < n < 150.\n");
        return 1;
    }

    int divisors = countDivisors(n);
    printf("Кількість рівних дільників числа %d: %d\n", n, divisors);

    return 0;
}
