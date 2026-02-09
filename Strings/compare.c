#include <stdio.h>

int main() {
    int n, i = 0, flag = 0;

    printf("Enter size of strings: ");
    scanf("%d", &n);
    getchar();

    char a[n], b[n];

    printf("Enter first string: ");
    fgets(a, n, stdin);

    printf("Enter second string: ");
    fgets(b, n, stdin);

    while (a[i] != '\0' || b[i] != '\0') {
        if (a[i] != b[i]) {
            flag = 1;
            break;
        }
        if (a[i] == '\n' && b[i] == '\n')
            break;
        i++;
    }

    if (flag == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}
