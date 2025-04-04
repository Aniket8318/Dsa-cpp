#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    char *s1 = str1;
    char *s2 = str2;
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    while (*s1)
    {
        s1++;
    }
    while (*s2)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    printf("Concatenated string: %s", str1);
    return 0;
}