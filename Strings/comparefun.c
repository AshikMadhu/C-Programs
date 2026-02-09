#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("Enter size of strings: ");
    scanf("%d", &n);
    char str1[n], str2[n];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (strcmp(str1, str2) == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}
