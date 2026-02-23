#include <stdio.h>
int main() {
    int n, i, vowels = 0, consonants = 0;
    printf("Enter size of string: ");
    scanf("%d", &n);
    char str[n];
    printf("Enter string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || 
            (str[i] >= 'A' && str[i] <= 'Z')) {

            if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
                str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d", consonants);

    return 0;
}