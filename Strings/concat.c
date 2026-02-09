#include <stdio.h>
int main() {
    int n, i = 0, j = 0;
    printf("Enter size of strings: ");
    scanf("%d", &n);
    char a[n], b[n];
    printf("Enter first string: ");
    scanf("%s", a);
    printf("Enter second string: ");
    scanf("%s", b);
    while (a[i] != '\0') {
        i++;
    }
    while (b[j] != '\0') {
        a[i] = b[j];
        i++;
        j++;
    }
    a[i] = '\0';
    printf("Concatenated string: %s", a);
    return 0;
}

