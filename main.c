#include <stdio.h>

int main() {
    int A, B, C;
    int condition;

    printf("=== КОНТРОЛЬ КАЧЕСТВА НА ФАБРИКЕ ИГРУШЕК ===\n");
    printf("Введите вес трех игрушек (A, B, C): ");
    scanf("%d %d %d", &A, &B, &C);

    condition = (A % 7 == 0) && (B % 7 == 0) && (C % 7 == 0);

    printf("Партия пропущена (1 - да, 0 - нет): %d\n", condition);

    return 0;
}