#include <stdio.h>
int main() {
    int n, i = 0;
    printf("Enter size of string: ");
    scanf("%d", &n);
    char str[n];
    printf("Enter string: ");
    scanf("%s", str);
    while (str[i] != '\0') {
        i++;
    }

    printf("Length of string = %d", i);

    return 0;
}
