#include <stdio.h>

int main() {
    int n, i, key, flag = 0;

    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Element found at position %d", i + 1);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Element not found");

    return 0;
}
