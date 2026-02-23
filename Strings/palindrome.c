#include <stdio.h>
int main() {
    int n, i = 0, length = 0, flag = 0;
    printf("Enter size of string: ");
    scanf("%d", &n);
    char str[n];
    printf("Enter string: ");
    scanf("%s", str);

    while (str[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("String is Palindrome");
    else
        printf("String is Not Palindrome");

    return 0;
}