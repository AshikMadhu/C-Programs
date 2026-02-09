#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("Enter size of string: ");
    scanf("%d", &n);
    char str[n];
    printf("Enter string: ");
    scanf("%s", str);
    printf("Length of string = %lu", strlen(str));
    return 0;
}
