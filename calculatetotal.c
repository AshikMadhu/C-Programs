#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5, total;
    float per;

    printf("Enter marks of 5 subjects:\n");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    per = total / 5.0;

    printf("Total = %d\n", total);
    printf("Percentage = %.2f\n", per);

    if (per > 80)
        printf("Grade: A+");
    else if (per >= 65 && per <= 80)
        printf("Grade: A");
    else if (per >= 50 && per < 65)
        printf("Grade: B");
    else if (per >= 42 && per < 50)
        printf("Grade: C");
    else
        printf("Grade: Fail");

    return 0;
}
