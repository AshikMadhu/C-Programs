#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("Enter size of strings: ");
    scanf("%d", &n);
    getchar();
    char a[n], b[n];
    printf("Enter first string: ");
    fgets(a, n, stdin);

    printf("Enter second string: ");
    fgets(b, n, stdin);

    if (strcmp(a, b) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}
