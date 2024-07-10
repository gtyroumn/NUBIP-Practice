#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int P;

    printf("Введіть кількість розрядів (R <= 30): ");
    scanf("%d", &P);

    if (P <= 0 || P > 30) {
        printf("Неправильна кількість розрядів.\n");
        return 1;
    }

    long long totalPossible = pow(2, P); 
    long long invalidNumbers = 2 * (P - 2); 
    long long validNumbers = totalPossible - invalidNumbers; 
    

    printf("Кількість чисел з %d розрядів, де немає трьох однакових цифр підряд: %lld\n", P, validNumbers);

    return 0;
}