#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter operator (+ or -): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (op == '+')
        printf("Result = %d", a + b);
    else if (op == '-')
        printf("Result = %d", a - b);

    return 0;
}
