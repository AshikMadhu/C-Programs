#include <stdio.h>
#include <string.h>

int main() {
    int n;

    printf("Enter size of string: ");
    scanf("%d", &n);
    getchar();

    char str[n];

    printf("Enter string: ");
    fgets(str, n, stdin);

    printf("Length of string = %lu\n", strlen(str) - 1);
    return 0;
}
