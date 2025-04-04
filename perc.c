//Wriite a program in c to concatinate two strings using pointers
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



//Write a program to reverse the string using pointers
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char *s = str;
    printf("Enter the string: ");
    gets(str);
    int len = strlen(str);
    char *end = s + len - 1;
    while (s < end)
    {
        char temp = *s;
        *s = *end;
        *end = temp;
        s++;
        end--;
    }
    printf("Reversed string: %s", str);
    return 0;
}

//Write a program to check pallindrome string using pointers
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char *s = str;
    printf("Enter the string: ");
    gets(str);
    int len = strlen(str);
    char *end = s + len - 1;
    int flag = 0;
    while (s < end)
    {
        if (*s != *end)
        {
            flag = 1;
            break;
        }
        s++;
        end--;
    }
    if (flag == 0)
    {
        printf("The string is palindrome");
    }
    else
    {
        printf("The string is not palindrome");
    }
    return 0;
}


//write a program to compare two strings using pointers
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
    int flag = 0;
    while (*s1 && *s2)
    {
        if (*s1 != *s2)
        {
            flag = 1;
            break;
        }
        s1++;
        s2++;
    }
    if (flag == 0)
    {
        printf("The strings are equal");
    }
    else
    {
        printf("The strings are not equal");
    }
    return 0;
}
//what is printf and returnf return ?