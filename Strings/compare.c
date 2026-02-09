#include <stdio.h>
int main() {
    int n, i = 0, flag = 0;
    printf("Enter size of strings: ");
    scanf("%d", &n);
    char a[n], b[n];
    printf("Enter first string: ");
    scanf("%s", a);
    printf("Enter second string: ");
    scanf("%s", b);
    while (a[i] != '\0' || b[i] != '\0') {
        if (a[i] != b[i]) {
            flag = 1;
            break;
        }

        i++;
        
    }

    if (flag == 0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}

