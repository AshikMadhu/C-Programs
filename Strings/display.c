#include <stdio.h>
int main() {
    int n;
    printf("Enter size of string: ");
    scanf("%d", &n);
    char str[n];
    printf("Enter string: ");
    scanf("%s", str);
    printf("Entered string is: %s", str);
    return 0;
}
