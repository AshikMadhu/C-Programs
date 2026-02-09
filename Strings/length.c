#include <stdio.h>

int main() {
    int n, i = 0, length = 0;

    printf("Enter size of string: ");
    scanf("%d", &n);
    getchar();

    char str[n];

    printf("Enter string: ");
    fgets(str, n, stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        length++;
        i++;
    }

    printf("Length of string = %d\n", length);
    return 0;
}
