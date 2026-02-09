#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("Enter size of strings: ");
    scanf("%d", &n);
    char a[n], b[n];
    printf("Enter first string: ");
    scanf("%s", a);
    printf("Enter second string: ");
    scanf("%s", b);

    if (strcmp(a, b) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}

