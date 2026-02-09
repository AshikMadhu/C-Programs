#include <stdio.h>

int main() {
    int n, i = 0, j = 0;

    printf("Enter size of strings: ");
    scanf("%d", &n);
    getchar();

    char a[n], b[n];

    printf("Enter first string: ");
    fgets(a, n, stdin);

    printf("Enter second string: ");
    fgets(b, n, stdin);

    while (a[i] != '\0') {
        if (a[i] == '\n') {
            a[i] = '\0';
            break;
        }
        i++;
    }

    while (b[j] != '\0' && b[j] != '\n') {
        a[i++] = b[j++];
    }

    a[i] = '\0';

    printf("Concatenated string = %s\n", a);
    return 0;
}
