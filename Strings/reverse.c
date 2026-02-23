#include <stdio.h>
int main() {
    int n, i = 0, length = 0;
    printf("Enter size of string: ");
    scanf("%d", &n);
    char str[n];
    printf("Enter string: ");
    scanf("%s", str);
    while (str[length] != '\0') {
        length++;
    }
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}