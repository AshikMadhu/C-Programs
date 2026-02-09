#include <stdio.h>
int main() {
    int n, i = 0, j = 0;
    printf("Enter size of strings: ");
    scanf("%d", &n);
    char str1[n], str2[n];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    while (str1[i] != '\0') {
        i++;
    }
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("Concatenated string: %s", str1);
    return 0;
}
