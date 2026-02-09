#include <stdio.h>
int main() {
    int n, i = 0, flag = 0;
    printf("Enter size of strings: ");
    scanf("%d", &n);
    char a[n], b[n];
    printf("Enter first string: ");
    fgets(a,sizeof(a),stdin);
    printf("Enter second string: ");
    fgets(b,sizeof(b),stdin);
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


